#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// Yuhan Wang 2233095
// Purpose: Design the program to get the character X pattern



int main()
{
	char arr[1024];	// Define the character array, the number of characters in array can be any number and it will be checked later because the max number is 9
	FILE* fin;     // Use the FILE pointer to define the file pointer fin
	fin = fopen("cp2.txt", "r");	// Open the file cp2.txt with only reading pattern
	

	int subscript =-1;    // Define the subscript of the characters in txt file to -1, the reason why it is -1 instead of other integers is that the last character 
	//  in each row is \n  , so that the subscirpt of each character must subtract 1, for example the subscript of the first character is 0 instead of 1.
	//  And at the following code it will have an increment of 1 with getting characters to c

	char c;    // Use c to get the input of characters in cp2.txt file
	if (fin == NULL)    // Determine whether it can open the file successfully
	{
		printf("It cannot open the file\n");
		return 0;    // If return 0, the program will end
	}

	while ((c=fgetc(fin))!=EOF)    // It means that it won't end the file, EOF means end of file     Use function fgetc to get the characters stored in txt file            
		// fgetc is the function that can get the characters in file one by one(also include space and \n )
	{
		if (c == ' ')  // space will not be output
		{
			continue;   // It means that when c equals to the space, it will not continue to do the loop, instead it will go to next character to check if it is space
		}
		if (c == '\n')   // It means that when c have already get the input of characters of the whole row and finally encounters with the \n
		{
			int i = 0;
			int j = 0;
			if (subscript > 8)  // As mentioned above, the maximum number of characters in arry is 9, so that the maximum number of subscript is 8
			{
				printf("The number of characters in array is above 9\n");
				printf("***End The Program***");
				break;    // If there is more than 9 characters in array, the while loop will end and the program will terminate
			}

			// For the upper section, above the central character
			for (i = 0; i <= subscript; i++)   // It should mention that i is subscript !!!  Not the number of characters
			{
				for (j = 0; j <= i - 1; j++)   // j is the number of row and the maximum number of row is i-1
				{
					printf(" ");
				}
				printf("%c", arr[i]);      // arr[i] is the character corresponds to the characters stored in cp2.txt file
				for (j = 1; j <= (subscript - i) * 2 - 1; j++)   // Note that when N=4, the spaces between 1 are 5, spaces between 2 are 3.....
				{
					printf(" ");
				}
				if (i != subscript)     // Because the last character at the central will only appear once
					printf("%c\n", arr[i]);
			}
			printf("\n");   // If there is no this code, the next character will be output nearby the central character

			// For the bottom section, below the central character
			for (i = subscript - 1; i >= 0; i--)   // It is from center to bottom  so that it is from the last character to the first character in txt file
			{
				for (j = 0; j <= i - 1; j++)	// j is the number of row and the maximum number of row is i-1
				{
					printf(" ");
				}

				printf("%c", arr[i]);	// arr[i] is the character corresponds to the characters stored in cp2.txt file but this time it is from right to left
				for (j = 1; j <= (subscript - i) * 2 - 1; j++)	// Note that when N=4, the spaces between 1 are 5, spaces between 2 are 3.....
				{
					printf(" ");
				}
				printf("%c\n", arr[i]);
			}
			printf("\n\n");			// There should be 2 lines sepreated between two structures
			subscript = -1;		// This is to reset the subscript to the initial value, it is because that it has already 
		}
		else 
		{
			arr[++subscript] = c;  
			// For if structure, if c=='\n' , then run the code above, but if c != '\n' , it will run this code that ++ means to get the 
			// character that is right next to the previous character( not including space) and put it into c
		}
	
	}
	return 0;
}