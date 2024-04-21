#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// Yuhan Wang 2233095
// Purpose: To design a program that can output the structure like two triangles
int main()
{
	int N = 0;
	int a = 0;
	int b = 0;        // Define five integer variables to use
	int i = 0;
	int j = 0;
	FILE* fout;        // Use the pointer to define the output file named CP2.txt
	printf("Input N : ");
	scanf("%d", &N);           // Ask the user to input
	fout = fopen("CP2.txt", "w");		//  Open file CP2.txt in written pattern "w", write the output into the CP2.txt
	fprintf(fout, "Input N: %d\n", N);    // Use fprintf to get all the outputs from the program to the file CP2.txt


	// First find that whether the input N is in the range
	while (N >= 1 && N <= 9)            // Use while loop to check whether N is at the range and do the loop with correct input N
	{
		// Divide the output into 4 parts and 2 sections
		
		// For the first section: the upper section that is above the number N which is at the central of the structure
		for (a = 1; a <= N; a++)        // a is the input number, from 1 to N
		{
			// For upper left part
			for (b = 1; b <= a - 1; b++)     //  b is the number of row that the upper triangle have
			{
				fprintf(fout," ");         //   When going to the next row, there will be a space right after the previous row
			}
			fprintf(fout,"%d", a);

			// For upper right part
			for (b = 1; b <= (N - a) * 2 - 1; b++)		// Note that when N=4, the spaces between 1 are 5, spaces between 2 are 3.....
			{
				fprintf(fout," ");
			}
			// But there is only one N to be output
			if (a != N)
				fprintf(fout,"%d", a);		// print the output into the file
			fprintf(fout,"\n");
		}

		// For the second section: the bottom section that is under the number N which is at the central of the structure
		// For the bottom left part
		for (i = N - 1; i >= 1; i--)    // Ruduced number because we from the center N to the bottom, because it is from N to 1
		{
			for (j = 1; j < i; j++)
			{
				fprintf(fout," ");
			}
			fprintf(fout,"%d", i);

			// For the bottom right part
			for (j = 1; j <= (N - i) * 2 - 1; j++)		// Note that when N=4, the spaces between 1 are 5, spaces between 2 are 3.....
			{
				fprintf(fout," ");
			}
			fprintf(fout,"%d", i);		// print the output into the file
			fprintf(fout,"\n");			
		}
		fprintf(fout,"\n\n");	 // Leave 2 lines in between successive outputs for clarity
		printf("Input N : ");
		scanf("%d", &N);
		fprintf(fout, "Input N: %d\n", N);    // It is a loop so that I should repeat the code of printf, scanf and fprintf of N
	}
	if (N < 1 || N> 9)
	{
		printf("***End The Program***"); // It is the case that the input N is not at the range of correct N so that the program will end 
		fprintf(fout, "***End The Program***");
	}
		return 0;
}
