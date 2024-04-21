#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// Yuhan Wang 2233095

int GEORGE(char* str)  // It is a function that is used to determine the length of strings, the type of the function is integer
                       // -- and using pointer to be the parameter
{ 
	char* start = str;   // str is the address of the first character in str, start and end are both the pointer
	char* end = str;
	while (*end != '\0' && *end != '\n')   // Using while loop to determine the length of string, and the string will not include the terminate character and \n
	{
		end++;    // To count the number of characters
	}
	return end - start;      // end-start will be the length of string, the type is integer and return to it
} 
int main()
{
	char arr1[40] = { 0 };   // Define the character array of size 40 and initialize it so that all the characters are 0
	char arr2[40] = { 0 };
	char c;   // Use character c to store the characters after dereference operation
	int i = 0;
	int size = 0;
	FILE* fin = fopen("cp4in_2.txt", "r");  // Use file pointer to open the file 
	char* p1 = arr1;
	char* p2 = arr2;  // p1 and p2 are character pointers and point the address of the first character of arr1 and arr2
	int j = 0;    // j is used for the loop to store the characters in arr2
	int k = 0;
	while (fgets(arr1, sizeof(arr1), fin) != NULL)  // Use fgets to get the characters from fin file and then store them into arr1 line by line
		// -- so that it can get the strings line by line to get all the characters
	{
		 size = GEORGE(arr1);  // Use the function GEORGE to calculate the length of arr1 
	
		 j= 0;// It is very important to set j=0 for every loop, if not, it will only print the first line of the string because for the bottom loop, there is 
		        // -- j++ so that it should be set to 0 for every loop
		
		 for (i = 0; i < size; i++)  // Use for loop to do the loop of subscript of pointer
		 {
			 c = *(p1 + i);  // Use character c to get the characters after dereference operation and then to determine whether the characters are alphanumeric characters
			 // -- or not
			 // Use this code to determine whether the characters are alphanumeric characters or not. Because the alphanumeric characters can be a and A, so that
			 // -- there will be 2 sentences to determine and for numbers between 0 and 9, it will use '0' and '9' instead of 0 and 9, because they are characters
			 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			 {
				 *(p2 + j) = *(p1 + i);  // Store all the alphanumeric characters into the arr2
				 j++;   // Use j++ and do the operation for all the characters
			 }
		 }
		 for (k = 0; k < j; k++)  // The use for loop to print out all the characters after combinations
		 {
			 printf("%c", *(p2 + k));  // p2+k is the pointer and *(p2+k) will be the real number at that address
		 }
		 printf("\n");  // For different strings it should be separated into different lines

	}

	return 0;
}