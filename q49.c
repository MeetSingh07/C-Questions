// Write a program to read a text file character by character and write it's content twice in separate file.

#include <stdio.h>

int main()
{
    int ch;

    FILE *ptr;
    ptr = fopen("input.txt", "r");
    FILE *ptr1;
    ptr1=fopen("output.txt","w");

    if (ptr == NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        while ((ch=fgetc(ptr))!=EOF)
        {
            printf("%c", ch);
            fputc(ch,ptr1);
            fputc(ch,ptr1);
        }
    }

    fclose(ptr);
    fclose(ptr1);

    return 0;
}