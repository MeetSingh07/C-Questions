// Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main()
{
    int num;

    FILE *ptr = fopen("test4.txt", "r");
    
    if (ptr == NULL)
    {
        printf("File does not exist.");
    }
    
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    
    num *= 2;
    
    ptr = fopen("test4.txt", "w");
    fprintf(ptr, "%d", num);

    printf("Value updated successfully.");

    fclose(ptr);

    return 0;
}