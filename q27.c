// Write a program to print the value of a variable i by using "pointer to pointer" type of variable.

#include<stdio.h>

int main(){
    int i=19;
    int* j=&i;
    int** k=&j;

    printf("The value of i is %d",**k);

    return 0;
}