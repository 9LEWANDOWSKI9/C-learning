#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Name: Yuhan Wang     2233095
// This program is mainly to read the data from txt file and then convert them into Binary, finally put them altogher into the output file


// First we need to read the data from the txt file and then store them into the array
void ReadNos(char arr1[][20], int* j)    // The two parameters are arr1 and a pointer
{
    FILE* fin = fopen("cp3.txt", "r");   // I use the funtion fopen to open the file that will be provided in read mode, fin is the file pointer
    if (fin == NULL)        // This is the code that determine whether the file will be open successfully or not
    {
        printf("Failed to open input file\n");
        return 0;
    }

    *j = 0;     // j actually is a counter and it will add 1 after one loop, and the reason why it uses * is because that when I use the ReadNos function, I use 
    // --the address of j to convey to here, so j is a pointer so that *j will be the number what j is. 
    while (fscanf(fin, "%s", arr1[*j]) != EOF)   // Use fscanf to read the data, and store the data into array arr1
    {
        (*j)++;    // Every time when reading a row of data, it will add 1 automatically, and arr1[*j} represents the data in file
        // So now the char arr1 will be the data in cp3.txt
    }

    fclose(fin);    // Close the file
}



void ConvertDecimal2Binary(char* str, char* binary, int k)    //  This function is mainly to convert decimal number into binary, including integers and float numbers
//  There are 2 pointers in this and an integer, those two are actually arrays  
{
    if (k == 0)   // When k==0, it means that now it is integer and we should do calculation for integer
    {
        int n = atoi(str);    // I use atoi funtion to convert the data that we have already stored in array into integers
        int i;

        for (i = 31; i >= 0; i--)   // i is the subscript of array and because we should put the characters in array from right to left so that i will begin at 31
        {
            binary[i] = abs(n % 2) + '0';    // This code is to divide the data by 2 and get the remainder of the calculation and then store them into array
            // --The most important thing is to add '0', the reason is that after doing the calculation of n%2, the result must be 
            // --the integers, but we need a binary and then store them into the array, so we need to convert the integers into the 
            // --characters, and in ASCLL code, '0' represents number 48 so that in this way, I will finally convert integers into 
            // --characters and store them into char array binary  

// I use abs because that we should use the positive value to deal with the negative number

            n = n / 2;      // Because the logic of calculation is divided by 2 and continues to the end so that we should use n=n/2 in the loop
        }

        //  Before going into the nagetive number, we have already got the 2's complement of its absolute number
        if (atoi(str) < 0)   // This case is for the negative number
        {
            for (i = 31; i >= 0; i--)
            {
                if (binary[i] == '1')   // I have already explained why it should be '1' instead of 1 because '1' is a character and 1 is an integer, in this code
                    // --I should store the data in char binary so that the type must be the character
                {
                    break;    // Because in computer, every number will be stored in 2's complement and for negative number, there is a special rule to get the 
                    // --2's complement: From right to right, find the first number that is 1, and from this 1, the right numbers will not be changed
                    //-- but for the left numbers, it should be inverter, 1 will be 0 and 0 will be 1 so that if binary =='1', it will break this loop
                }
            }
            for (int j = 0; j <= i; j++)     // Now I deal with the numbers that are on the left of the first '1' from right to left
            {
                if (binary[j] == '0')       //  Use if to get the inverter of each number
                {
                    binary[j] = '1';
                }
                else
                {
                    binary[j] = '0';
                }
            }
        }
    }
    else 
    {        // This is to deal with the float number 
        float f = atof(str);        // Use atof funtion to convert the character to float number
        unsigned int* ff = (unsigned int*)&f;       // I search the Internet that how to use the IEEE 754 to convert float number to binary and it remind me that 
                                                    // -- I should use "unsigned int" to do the conversion, so I need do the Cast Operation    
                                                    // -- The reason that I use the address of f instead of do the cast operation directly is because that
                                                    // -- the memory layouts of float and unsigned int are different, so if do the operation directly, it will be wrong
                                                    // -- But when using pointer, it will be the same and they will have the same memory layouts

        unsigned int u = *ff;    // Use * to get the actual number of u
        int i;
        for (i = 31; i >= 0; i--) {
            binary[i] = abs(u % 2) + '0';   // The operation is the same as integer
            u =u / 2;
        }
    }
}






void WriteBinaryNos() 
{
    char arr[100][20] = { 0 };  // I use 2-dimention array, the first [] is row number and the second [] is the characters
                                // That is because in txt file, the data are in rows and I need to store them into array
    int count;
    int fff = 0;
    char binary[333] = { '\0' };  // The binary will store the characters that after the conversion
    FILE* fout;

    ReadNos(arr, &count);   // Use the pointer because in function ReadNos, I should change the value of count so that it should use pointer instead of integer

    fout = fopen("cp3.out.txt", "w");
    if (fout == NULL)   // To determine whether the file can be open successfully or not
    {
        printf("Failed to open output file.\n");
        return;
    }

    for (int i = 0; i < count; i++)   // After using the function ReadNos, the count will equal to the total rows of cp3.txt file so use loop to check the float
    {
        // check if the number is a float
        if (strchr(arr[i], '.') != NULL)    // I use strchr funtion to find decimal point in arr, and if there is the decimal point, it will return 1
                                            // it != NULL because strchr will return a pointer, if there is no decimal point, it will be NULL pointer    
        {
            fff = 1;
        }
        else 
        {
            fff = 0;
        }

        ConvertDecimal2Binary(arr[i], binary, fff);   // Use the function  ConvertDecimal2Binary to do the conversion
       
        // Now it will do the output and put it into the file
        // As for float number
        if (fff==1)
        {
            // For alignment, I use the function strlen to calculate the length of arr, in this way the seperations between the first character of data and "is" will
            // -- be defined as 40, also it can be random number 
            fprintf(fout, "The binary representation of decimal        %s%*sis  " ,arr[i], (40 - strlen(arr[i]))," ");      
            
            // print the output of float into 3 different parts---sign, exponent and mantissa
            fprintf(fout, "%c ", binary[0]); // sign
            fprintf(fout, "%c%c%c%c%c%c%c%c ", binary[1], binary[2], binary[3], binary[4], binary[5], binary[6], binary[7], binary[8]); // exponent
            fprintf(fout, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", binary[9], binary[10], binary[11], binary[12], binary[13], binary[14], binary[15], binary[16], binary[17], binary[18], binary[19], binary[20], binary[21], binary[22], binary[23], binary[24], binary[25], binary[26], binary[27], binary[28], binary[29], binary[30], binary[31]);// mantissa
        }
        // As for integers
        else 
        {
            // Because it should do the alignment, so the code will be the same
            fprintf(fout, "The binary representation of decimal        %s%*sis  ",arr[i], (40 - strlen(arr[i]))," ");
            fprintf(fout, "%s\n", binary);
        }
    }

    fclose(fout);   // Close the file
} 





int main()
{
    WriteBinaryNos();   // Use the WriteBinaryNos function to get the output
    return 0;
}




// There is a small problem about alignment, I think I have written the correct code to align them, and if you use printf instead of fprintf you will see that 
// -- it is well aligned, but if using fprintf to write all the data into the txt file, the problem is that the width of numbers, decimal-points and the spaces are not 
// -- the same and the width of numbers seem to be larger so that it can't get the alignment so well in txt file.
