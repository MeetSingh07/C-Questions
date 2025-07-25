// Write a program to generate multiplication table of a given number in text format.
// Make sure that the file is readable and well formated.

#include<stdio.h>

int main(){
    int num;

    printf("Enter the number to print it's multiplication number: ");
    scanf("%d",&num);

    FILE *ptr;

    ptr = fopen("test2.txt","w");

    for(int i=1;i<11;i++){
        fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
    }

    fclose(ptr);

    return 0;
}