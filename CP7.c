#define _CRT_SECURE_NO_WARNINGS 
// Yuhan Wang 2233095
// This program is to read the data from the file and then convert them into polynomials and then to add them and mult them together

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct   // define the struct that has two parameters: coeffiecient and exponent
{
    double coefficient;
    int exponent;
} Term;  // One of the struct name is Term and in the following code I will use struct Term to do the operation

// Function GIROUD is mainly to combine the terms together after mult them
void GIROUD(Term* poly, int* size) 
{
    for (int i = 0; i < *size; i++) 
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (poly[i].exponent == poly[j].exponent)  // If two terms have the same exp, then add them together
            {
                poly[i].coefficient += poly[j].coefficient;  // += to add them together 

                // Move the last term to the current position
                poly[j] = poly[*size - 1];
                (*size)--;  // Move the pointer -- when every loop do the operation
                j--;
            }
        }
    }
}

// This function is to make the terms are in descending exponential order
int RODRI(const void* a, const void* b) 
{
    const Term* terma = (const Term*)a; // This is to define two new struct varibles named terma and term b, and the type is Term*
    const Term* termb = (const Term*)b;

    if (terma->exponent > termb->exponent)  // If terma's exp is larger than termb's, then return -1 
        return -1;
    else if (terma->exponent < termb->exponent)  // If terma's exp is larger than termb's, then return 1
        return 1;
    else
        return 0;   // If their exp are the same, then return 0
}

// This function is to mult the two polynomials together 
void mult_poly(FILE*fin, const Term* poly1, const Term* poly2, int size1, int size2) 
{   // First, the FILE pointer is needed because all the results should be printed to the out file
     // Then the two struct variables poly1 and poly2 are also important
     // The last two variables are size of poly1 and poly2
    Term result[100];  // define an array
    int size = 0;   // This is the size of the mult result

    for (int i = 0; i < size1; i++)  // This loop is to do the operation for all the terms
    {
        for (int j = 0; j < size2; j++)
        {
            result[size].exponent = poly1[i].exponent + poly2[j].exponent; // For multiplication, the exponent will add with each other
            result[size].coefficient = poly1[i].coefficient * poly2[j].coefficient;  // And the coefficient will multiply with each other
            size++;  // The size of result will add by 1 after one operation
        }
    }
    GIROUD(result, &size);  // Use function GIROUD to combine the terms togerther after multiplication
    qsort(result, size, sizeof(Term), RODRI);  // use qsort function can sort the final result in the result

    fprintf(fin,"The product of polynomials:\n");  

    // Output polynomial 1
    qsort(poly1, size1, sizeof(Term), RODRI);  // First should use qsort to sort the terms in polynomial 1
    for (int k = 0; k < size1; k++)   // for loop to sort every term in polynomial 1
    {
        double coefficient = poly1[k].coefficient;  // define the variable coefficient and exponent in poly1
        int exponent = poly1[k].exponent;

        if (coefficient != 0)
        {
            if (coefficient > 0 && k != 0)   // When coefficient greater than 0 then output +, otherwise it will output -
            {
                fprintf(fin,"+ ");  // Output +
            }

            if (coefficient == 1 && exponent != 0)  // When coefficient equal to 1, it will output x, means than x^1 is illegal but x is legal
            {
                fprintf(fin,"x"); // Output single x
            }
            else if (coefficient == -1 && exponent != 0)   // The same as above but this time coefficient equals to -1
            {
                fprintf(fin,"-x");  // Output single -x
            }
            else {
                fprintf(fin,"%.3lf", coefficient);  // Use this to output the coefficient with the type of double and store at least 3 digits after .
                if (exponent != 0) 
                {
                    fprintf(fin,"x"); // Output single x
                }
            }
             
            if (exponent > 1)   // If exponent greater than 1, it means it shoule output '^'
            {
                fprintf(fin,"^%d ", exponent);  // so that ^%d will output the x term in the result
            }
            else if (exponent == 1)
            {
                fprintf(fin," ");  // If exponent equals 1, it means it should output one x
            }
        }
    }
    fprintf(fin,"\n");   // Change to another line

    // Output polynomial 2
    qsort(poly2, size2, sizeof(Term), RODRI);  // The same as above, should use qsort to sort the terms in poly2
    for (int k = 0; k < size2; k++) 
    {
        double coefficient = poly2[k].coefficient;  // define the variable coefficient and exponent in poly2
        int exponent = poly2[k].exponent;

        // All the following is the same as above
        if (coefficient != 0)
        {
            if (coefficient > 0 && k != 0) 
            {
                fprintf(fin,"+ ");
            }

            if (coefficient == 1 && exponent != 0) 
            {
                fprintf(fin,"x");
            }
            else if (coefficient == -1 && exponent != 0) 
            {
                fprintf(fin,"-x");
            }
            else {
                fprintf(fin,"%.3lf", coefficient);
                if (exponent != 0) 
                {
                    fprintf(fin,"x");
                }
            }

            if (exponent > 1) 
            {
                fprintf(fin,"^%d ", exponent);
            }
            else if (exponent == 1)
            {
                fprintf(fin," ");
            }
        }
    }
    fprintf(fin,"\n");  // Change to another line

   fprintf(fin,"is\n");  // According to the example output, there should be "is" in single line

    // Output the result
    for (int k = 0; k < size; k++) 
    {
        double coefficient = result[k].coefficient;  // Use this to define the result's exponent and coefficient
        int exponent = result[k].exponent;
        // Also, this fprintf is the same as above because they are in the same type of output
        if (coefficient != 0)  
        {
            if (coefficient > 0 && k != 0)
            {
                fprintf(fin,"+ ");
            }

            if (coefficient == 1 && exponent != 0) 
            {
                fprintf(fin,"x");
            }
            else if (coefficient == -1 && exponent != 0) 
            {
                fprintf(fin,"-x");
            }
            else
            {
                fprintf(fin,"%.3lf", coefficient);
                if (exponent != 0)
                {
                    fprintf(fin,"x");
                }
            }

            if (exponent > 1) 
            {
                fprintf(fin,"^%d ", exponent);
            }
            else if (exponent == 1) 
            {
                fprintf(fin," ");
            }
        }
    }
    fprintf(fin,"\n");  // There should be a \n because in the following, the output should at a new line
}

// The function add_poly is to add the two polynomials together
void add_poly(FILE* fin, const Term* poly1, const Term* poly2, int size1, int size2) 
{    // There are 5 parameters, the first is the file pointer to point the output file
      // Then the two struct variables poly1 and poly2 are also important
     // The last two variables are size of poly1 and poly2
    Term result[50];  // This is used to store the result
    int size = 0;  // The size of result
    int i = 0, j = 0;  // Use to do the loop

    while (i < size1 && j < size2)
    {
        if (poly1[i].exponent > poly2[j].exponent)  // For addition, only when the exponents of the two polynomials are the same, then add the coefficient of theirs
        {
            result[size++] = poly1[i++];  // if the exponent of poly1 > poly2, then first output poly1
        }
        else if (poly1[i].exponent < poly2[j].exponent) 
        {
            result[size++] = poly2[j++];   // if the exponent of poly1 < poly2, then first output poly2
        }
        else
        {
            result[size].exponent = poly1[i].exponent;  
            result[size].coefficient = poly1[i].coefficient + poly2[j].coefficient;  // Add the coefficients of them together
            size++;  // For the three counters, all of them should add by 1 after one loop
            i++;
            j++;
        }
    }
    while (i < size1) 
    {
        result[size++] = poly1[i++];
    }

    while (j < size2) 
    {
        result[size++] = poly2[j++];
    }
    qsort(result, size, sizeof(Term), RODRI);  // Use qsort to sort the terms in result in deceeding order

    fprintf(fin,"The sum of polynomials:\n");  // The same format as in the example output

    // Output polynomial 1, This is the same as what I have done in mult_poly
    qsort(poly1, size1, sizeof(Term), RODRI);
    for (int k = 0; k < size1; k++) {
        double coefficient = poly1[k].coefficient;
        int exponent = poly1[k].exponent;

        if (coefficient != 0) 
        {
            if (coefficient > 0 && k != 0)
            {
                fprintf(fin,"+ ");
            }

            if (coefficient == 1 && exponent != 0)
            {
                fprintf(fin,"x");
            }
            else if (coefficient == -1 && exponent != 0)
            {
                fprintf(fin,"-x");
            }
            else 
            {
                fprintf(fin,"%.3lf", coefficient);
                if (exponent != 0) {
                    fprintf(fin,"x");
                }
            }

            if (exponent > 1) 
            {
                fprintf(fin,"^%d ", exponent);
            }
            else if (exponent == 1) 
            {
                fprintf(fin," ");
            }
        }
    }
    fprintf(fin,"\n");

    // Output polynomial 2, This is the same as what I have done in mult_poly
    qsort(poly2, size2, sizeof(Term), RODRI);
    for (int k = 0; k < size2; k++) 
    {
        double coefficient = poly2[k].coefficient;
        int exponent = poly2[k].exponent;

        if (coefficient != 0) 
        {
            if (coefficient > 0 && k != 0)
            {
                fprintf(fin,"+ ");
            }

            if (coefficient == 1 && exponent != 0)
            {
                fprintf(fin,"x");
            }
            else if (coefficient == -1 && exponent != 0)
            {
                fprintf(fin,"-x");
            }
            else {
                fprintf(fin,"%.3lf", coefficient);
                if (exponent != 0) 
                {
                    fprintf(fin,"x");
                }
            }

            if (exponent > 1)
            {
                fprintf(fin,"^%d ", exponent);
            }
            else if (exponent == 1) 
            {
                fprintf(fin," ");
            }
        }
    }
    fprintf(fin,"\n");

    fprintf(fin,"is\n");

    // Output the result, This is the same as what I have done in mult_poly
    for (int k = 0; k < size; k++) 
    {
        double coefficient = result[k].coefficient;
        int exponent = result[k].exponent;

        if (coefficient != 0) 
        {
            if (coefficient > 0 && k != 0) 
            {
                fprintf(fin,"+ ");
            }

            if (coefficient == 1 && exponent != 0)
            {
                fprintf(fin,"x");
            }
            else if (coefficient == -1 && exponent != 0) 
            {
                fprintf(fin,"-x");
            }
            else
            {
                fprintf(fin,"%.3lf", coefficient);
                if (exponent != 0) 
                {
                    fprintf(fin,"x");
                }
            }

            if (exponent > 1) 
            {
                fprintf(fin,"^%d ", exponent);
            }
            else if (exponent == 1) 
            {
                fprintf(fin," ");
            }
        }
    }
    fprintf(fin,"\n");
}

// This function input_poly is to read the data from the input file and then convey all the parameters to add_poly and mult_poly functions
void input_poly(const char* file_path, const char* file_path1)
{  // There are two parameters, the first one is for the input file and the second one is for the output file
    FILE* file = fopen(file_path, "r");  // Use read mode to open the first file
    FILE* fin = fopen(file_path1, "w");  // Use write mode to open the first file
    if (file == NULL)  // If the file pointer equals to NULL, it means there is no such file
    {
        printf("Failed to open the file.\n");
        return;
    }

    char arr[100];  // Use this to store all the characters in the file 
    int count = 0;  // The counter, to counter the total lines in the file
    Term poly1[50];  // Store the first polynomial
    Term poly2[50];   // Store the second polynomial
    int size1 = 0;   // The size of first polynomial
    int size2 = 0;  // The size of second polynomial

    while (fgets(arr, sizeof(arr), file) != NULL)   // Use fgets to read all the lines in the input file line by line
    {
        if (count % 2 == 0)    // For the odd number line, it should be the first polynomial
        {
            size1 = 0;
            char* GEORGE = strtok(arr, " ");  // Use the function strtok to add space between the characters
            while (GEORGE != NULL) 
            {
                poly1[size1].coefficient = atof(GEORGE);  // function atof can translate the character into float, because the coefficient can be float number
                GEORGE = strtok(NULL, " ");  // Add space
                poly1[size1].exponent = atoi(GEORGE);  // function atoi can translate the character into integer, because the exponent can only be integer
                GEORGE = strtok(NULL, " ");
                size1++;  // size of the first polynomial will add by 1 after each loop
            }
        }
        else 
        {
            size2 = 0;
            char* AKANJI = strtok(arr, " ");
            while (AKANJI != NULL) 
            {
                poly2[size2].coefficient = atof(AKANJI);  // function atof can translate the character into float, because the coefficient can be float number
                AKANJI = strtok(NULL, " ");
                poly2[size2].exponent = atoi(AKANJI);  // function atoi can translate the character into integer, because the exponent can only be integer
                AKANJI = strtok(NULL, " ");
                size2++;  // size of the second polynomial will add by 1 after each loop
            }
            const char* file_path = "cp7_in.txt";  // This is the input file
            const char* file_path1 = "cp7.out";   // This is the new output file
            add_poly(fin,poly1, poly2, size1, size2);  // This is to use the add_poly function to add the two polynomials together
            fprintf(fin,"\n");  // Change to another line
            mult_poly(fin, poly1, poly2, size1, size2);  // This is to use the mult_poly function to multiply the two polynomials together
            fprintf(fin,"\n");

        }
        count++;  // The counter of total number of lines will add by 1 after each loop
    }

    fclose(file);   // close the file
    fclose(fin);
}

int main() {
    const char* file_path = "cp7_in.txt";   // This is the input file
    const char* file_path1 = "cp7.out";    // This is the new output file
    input_poly(file_path, file_path1);   // This to use the input_poly function to read the data in input file and then output it
    return 0;
}

