#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// Yuhan Wang 2233095

int GEORGE(char* str)  // It is a function that is used to determine the length of strings, the type of the function is integer
                       // -- and using pointer to be the parameter
{
	char* start = str;    // str is the address of the first character in str, start and end are both the pointer
	char* end = str;
	while (*end != '\0'&& *end !='\n')   // Using while loop to determine the length of string, and the string will not include the terminate character and \n
	{
		end++;    // To count the number of characters
	}
	return end - start;    // end-start will be the length of string, the type is integer and return to it
}

int main()
{
	char arr1[20] = { 0 };  // Define the character array of size 20 and initialize it so that all the characters are 0
	char arr2[20] = { 0 };
	char arr3[40] = { 0 };   // Because the arr3 will store the characters in arr1 and arr2 so that the size of it will be the sum of arr1 and arr2
	FILE* fin = fopen("cp4in_1.txt", "r");   // Use the file pointer to open the file
	int size1 = 0; 
	int size2 = 0;   // These 2 variables are the length of arr1 and arr2, because for one operation it will use two strings.
	int k = 0;   // k is used for the loop to store the characters in arr3
	char* p1 = arr1;
	char* p2 = arr2;
	char* p3 = arr3;   // p1, p2 and p3 are three pointers to get the addresses of three arrays, and if there is only the name of array, it represents the address
					   // -- of the first character	
	while (fgets(arr1, sizeof(arr1), fin) && fgets(arr2, sizeof(arr2), fin)!=NULL)  // Use fgets to get the characters that are stored in the file
		// -- the characters will be stored to arr1 and arr2, the size of them are sizeof(arr1) and sizeof(arr2), and the source is from fin file
		// -- In this way, the line 1,3,5,7...will be stored into arr1, and the line 2,4,6,8...will be stored into arr2
	{
		
		size1 = GEORGE(arr1);   
		size2 = GEORGE(arr2);  // Use the function GEORGE to calculate the length of arr1 and arr2
		k = 0;  // It is very important to set k=0 for every loop, if not, it will only print the first line of the string because for the bottom loop, there is 
		        // -- k++ so that it should be set to 0 for every loop
			int i = 0;
			for (i = 0; i < size1 + size2 ; i++)  // The reason for the upper limit is size1+size2 is that the length of arr3 should be the sum of length of arr1
				// -- and arr2 so that it should be size1 + size2.  And i is the subscript so that it will begin from 0
			{

				// Then use if to store the characters into arr3, the code logic is: For i from 0 to size1+size2, i=0, it will pick the first character in arr1
				//-- and store it into arr3. Then k++ so that it will do the operation for the second character of arr3. Then for the second character in arr3, it 
				//-- will be the first character in arr2 because now i=0. It is the first loop, and then for i=1, 2, 3... until i>= size1 OR i>=size2
				// If i>=size1(it means size2 > size1), it will not go into the first if part and will go into the second if to do the operation and the same case
				//-- for i>=size2, so it will solve the different length of arrays successfully
				if (i < size1 )   
				{
					*(p3 + k) = *(p1 + i);   // Use * to get the real number with the address of p3+k and p1+i
					k++;   // k++ is to do the operation for the second character in arr3
				}
				if (i < size2 )
				{
					*(p3 + k) = *(p2 + i);  // Use * to get the real number with the address of p3+k and p2+i
					k++;
				}
			}
			for (k = 0; k < size1 + size2; k++)  // The use for loop to print out all the characters after combinations
			{
				printf("%c", *(p3 + k)); // p3+k is the pointer and *(p3+k) will be the real number at that address
			}
			printf("\n");  // For different strings it should be separated into different lines
	}
}

