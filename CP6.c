#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <string.h>

// Yuhan Wang 2233095 This program is designed to do the operation on the characters in file and then output back to the file
// The operation is first delete one character in string, and then replace one character with another character, finally replace the characters in the 
// 5th positions with a new character




// This function is to replace the character in the 5th position with a new character
void replace(FILE* fin, char c3)   
{
    fseek(fin, 0, SEEK_SET);  // Every time before the operation, the pointer should be put to the beginning of the file
    long int GEORGE = 4;  // This is the place of the first pointer, 4 represents the fifth character
    char ch;
    while ((ch = fgetc(fin)) != EOF)    //  use fgetc to get the character from the fin
    {
        if (GEORGE % 5 == 4 )   // This is the statement to judge whether to do the operation or not
        {
            fseek(fin, GEORGE, SEEK_SET);  // Offset is GEORGE from the beginning 
            ch = c3;   // Replace the character to the character the user select
            fputc(ch, fin);   // put the character back into the file
            fseek(fin, GEORGE, SEEK_SET);   

        }
       ++GEORGE;   // counter ++1 every time so that can contain all the characters
        fseek(fin, GEORGE, SEEK_SET);    // The pointer location will be to the GEORGE from the beginning 
    }
  
    fseek(fin, 0, SEEK_END);    // Put the pointer to the end 
   
}

// This function is to replace the selected character with the new character
void LEWANDOWSKI(FILE* fin, char c1, char c2)  
{
    fseek(fin, 0, SEEK_SET);   // Every time before the operation, the pointer should be put to the beginning of the file
    char ch;
    long akanji = 0;  // the counter
    while ((ch = fgetc(fin)) != EOF)   // To get all the characters
    {
        if (ch == c1)   // Encounter the seleced character
        {
            fseek(fin, akanji, SEEK_SET);  // Put the pointer to this location
            ch = c2;   // Replace
            fputc(ch, fin);   // Put the characters back to the file
           
        }
        ++akanji;   // The counter, ++1 every loop
        fseek(fin, akanji , SEEK_SET);  // Put the pointer to this location
    }
    fseek(fin, 0, SEEK_END);   // Put the pointer to the end 
  
}


// This function is to delete the selected character
void RODRI(FILE* file, char deleteChar) 
{
    fseek(file, 0, SEEK_SET); // Every time before the operation, the pointer should be put to the beginning of the file

    char ch;
    long FODEN = 0;  // The counter, counter the delete character
    long BRUYNE = 0;  // The counter, counter the remaining characters
    while ((ch = fgetc(file)) != EOF) 
    {
     
        if (ch != deleteChar)   // For the remaining characters
        {
            fseek(file, BRUYNE, SEEK_SET);   // Move the pointer to this place
            fputc(ch, file);  // Put the characters after operation back to the file
            ++BRUYNE;  // ++1 the counter
        }
 
        ++FODEN;  //++1 the counter
        fseek(file, FODEN, SEEK_SET);  // Move the pointer to this place
    }

   
    long originalSize = ftell(file);  // Use ftell to get the location of the pointer
    fseek(file, BRUYNE, SEEK_SET);
    _chsize(_fileno(file), BRUYNE);  // Truncate the string
    fseek(file, originalSize, SEEK_SET); // Move the pointer back to the original 
        fseek(file, 0, SEEK_END);  // Put the pointer to the end 
}

int main() {
    char filename[200];
    char deleteChar;
    char c1, c2, c3;
   
    printf("Enter file name: ");  // Enter the file name
    scanf("%s", filename);
 
    FILE* file = fopen(filename, "r+");  // Under r+ mode, it can read and write the file


    getchar();  // getchar to get the \n
    printf("Enter a character to be deleted£º");
    scanf("%c", &deleteChar);
    getchar();  // getchar to get the \n

    RODRI(file, deleteChar);
    fseek(file, 0, SEEK_END);  // After the operation, the pointer should be put back to the end


    printf("Enter a character to be replaced :");
    scanf("%c", &c1);
    getchar();  // getchar to get the \n
    printf("Enter a character to be replaced to :");
    scanf("%c", &c2);
    getchar();  // getchar to get the \n
    LEWANDOWSKI(file, c1, c2);
    fseek(file, 0, SEEK_END);  // After the operation, the pointer should be put back to the end

    printf("Enter a character to replace at 5th position :");
    scanf("%c", &c3);
    getchar();  // getchar to get the \n
    replace(file,c3);

    fclose(file);  // Close the file

    return 0;
}









