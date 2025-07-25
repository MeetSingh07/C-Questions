// Write a program to read three integers from a file.

#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("test.txt", "r");

    int num1 , num2 , num3;

    if (ptr == NULL)
    {
        printf("File does not exist!!!");
    }
    else
    {
        
            fscanf(ptr , "%d %d %d" , &num1,&num2,&num3);
            printf("Numbers are %d %d %d",num1,num2,num3);

            fclose(ptr);
    }
    
    return 0;
}
