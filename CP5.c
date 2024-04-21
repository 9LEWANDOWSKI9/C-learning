#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
// Yuhan Wang 2233095
// This program is designed to determine whether the statement is legal or not, based on the rules that are given.



int isvariable(char c)   // This function is mainly to determine whether the first character of variable's name is correct or not
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c=='_'))  // first character should only be _ or letter
		return 1;  // If correct then returns 1
	return 0;    // Otherwise it returns 0, all the codes in the following codes are the same meaning.
}
int isvariable1(char c)  // This function is mainly to determine whether a character is letter
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))  // If it is a letter, the ASCLL range should be a-z or A-Z
		return 1;
	return 0;
}
int isnumber(char c)     // This funtion is mainly to determine whether a character is a number(integer)
{ 
	if (c >= '0' && c <= '9')   // The ASCLL range is from 0-9
		return 1;
	return 0;
}
int isequal(char* arr, int size)  // This function is to determine the subscript of the "=" so that we can do the operation more convenient
{     // the parameter size is the total characters that in one statement
	int i = 0; 
	for (i = 0; i < size; i++) // Use for loop to detect the whole statement to find the "="
	{
		if (arr[i] == '=')
			break;  // Once find the character "=" and then break, there is no need to detect the following characters
	}
	return i;  // i is the subscript of "=" and this is what we want to find
}

int judge(char* arr, int size) // This function is used to judge whether the whole statement is legal or not
  // There are two parameters, the first one is the array that stores the contents in cp5in.txt, the second is the size of each line of statement
{
	int j = isequal(arr, size);  // Use function isequal to get the subscript of "="


	
	int n = 0;

	// This part is to determine the first character of LHS, which is must be letter or _
	int a1 = isvariable(arr[0]);   
	if (a1 == 0)   // If it is not letter or _ it will return 0, illegal
		return 0;

	// This part is to determine whether the last character of statement is semicolon or not
	 if (arr[size - 1] != ';')   // There are size characters in a statement, so that size-1 will be the subscript of the last character
		return 0;



	 int i = 0;
	 int k = 0;
	for(i=j+1;i<size;i++)  // This part is to determine that in one statement there should be only one operator
	{
		 if ((arr[i] == '+') || (arr[i] == '-') || (arr[i] == '*') || (arr[i] == '/') || (arr[i] == '%'))  // There are 5 operators
			 k++;   // The counter
     }
	 if (k > 1)   // It means that there are more than 2 operators, it is illegal
		 return 0;


	 // This part is to limit that there is only one variable in function call, because if there are more than 2 variables in one function
	// call, the 2 variables will be seperated by "," , so that it will first find ","
	// What's more, it will also limit the function nesting
	 int m = 0;
	 for(m=j+1;m<size;m++)   
	 {
		 if (arr[m] == '(')  //  If encounters ( , it means functon call
		 {
			 int w = 0;
			 for (w = m + 1; w < size; w++)  // This is the loop that begins at the (
			 {
				 if (arr[w] == ',')   // Here find a , so that it is  illegal, it will return 0
					 return 0;
			
			 }
			 n++;   // Once there is a "(" , the counter will add 1, and finally it will determine whether it is larger than 1
		 }
	 }
	 if (n > 1)  // It means there a function nesting, illegal
		 return 0;


	 // This part is to check the variable name in the function call, that the same as C, number cannot be the first character
	 int s = 0;  
	 int k1 = 0;
	 int k2 = 0;
	 for (s = j + 1; s < size; s++)   // Loop for the RHS
	 {
		 if (arr[s] == '(')     // Encounters the "(" so that it is the begining of function call
		 {
			 for (k1 = s + 1; k1 < size; k1++)  // Loop that is on the right of the (
			 {
				 k2 = isnumber(arr[k1]);  // Use the function isnumber to check the number
				 if (k2 == 1)  // If there is a number so that k2 will be 1 
					 break;  // There may be many integers in the variable's name, but it is not important, we only need to focus on the first integer that 
				             // on the right of "("
			 }
		 }
	 }
	 int s1 = 0;
	 int k3 = 0;
	 int k4 = 0;
	 for (s1 = j + 1; s1 < size; s1++)  // The same as above
	 {
		 if (arr[s1] == '(')
		 {
			 for (k3 = s1 + 1; k3 < size; k3++)
			 {
				 k4 = isvariable(arr[k3]);   // Use the function isvariable to check the letter or _
				 if (k4 == 1)
					 break;   // It will eliminate the loop if it encounter the first letter on the right of the "("
			 }
		 }
	 }
	 if ( (k4==1) && (k2==1) && (k1 < k3))  // This if statement is that there should be really encounter integers and variables
		 //  k4 and k2 equal 1 means that there have integer and letter  and k1<k3 means that the number is on the left of letter or _, which is illegal
		 return 0;

	
	 // There is a limit that if there is a function call, there should not have + - * / %
	 int y = 0; 
	 int e = 0;
	 for (y = j + 1; y < size; y++)
	 {
		 for (e = j + 1; e < size; e++)
		 {
			 // This if statement means that ( and the operators cannot appear at the same time
			 if (((arr[y] == '(') && (arr[e] == '+')) || ((arr[y] == '(') && (arr[e] == '-')) || ((arr[y] == '(') && (arr[e] == '*')) || ((arr[y] == '(') && (arr[e] == '/')) || ((arr[y] == '(') && (arr[e] == '%')))
				 return 0;
			 
		 }
	 }

	 // The RHS cannot be character or string
	 int f = 0; 
	 for (f = j + 1; f < size; f++)
	 {
		 if ((arr[f] == '\'') || (arr[f] == '"'))  // ' means character and "means string
			 return 0;
	 }
	 

	 // There cannot be wrong characters such as !@#$^&
	 int de = 0; // ´íÎó·ûºÅ
	 for (de = j + 1; de < size; de++)
	 {
		 // This is not hard-coding because the number of these characters is not too much 
		 if (  (arr[de] == '?') || (arr[de] == '!') || (arr[de] == '@') || (arr[de] == '#') || (arr[de] == '$') || (arr[de] == '|') || (arr[de] == '^') || (arr[de] == '&') || (arr[de] == '=') || (arr[de] == '~'))
			 return 0;
	 }


	 // This part is to check the wrong floating point at the RHS, there maybe more than 2 floating points
	 int vini = 0;
	 int counter1 = 0;
	 for (vini = j + 1; vini < size; vini++)
	 {
		 if (arr[vini] == '.')
		 {
			 counter1++;  // If there is a floating point, then the counter will add 1
		 }
	 }
	 if (counter1 > 1)  // If there are more than 1 floating point, it is illegal
		 return 0;

}

// This is the main function
int main()   
{
	char arr[50];  // First initialize the array of 50 characters
	FILE* fin = fopen("cp5in.txt", "r"); // Use the file pointer to open the file
	while (fgets(arr, 50, fin) != NULL)  // Use fgets to read the statements from the text file
	{
		printf("%s", arr);   // It is the type of string so that it will be %s

		int size = strlen(arr) - 1;  // Use function strlen to get the total length of each statement, and -1 because the last character is \n
		if (arr[size] != '\n')  // This part is to add \n for the last row of statement because the last row does not has the \n character
		{  
			arr[size] == '\n';  // Add \n to the last row
			arr[size + 1] == '\0';
			size++; 
		}
		int RODRI = judge(arr, size);   // Use the function that I write above to check the RHS

		if (feof(fin))// This part is to add \n for the last row of statement because the last row does not has the \n character
			printf("\n");
		
		if (RODRI == 0)
			printf("This statement is illegal\n");
		else
			printf("This statement is legal\n");

	}
	return 0;
}