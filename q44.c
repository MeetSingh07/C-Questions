// Write a program with a structure representing a complex number.

#include<stdio.h>

typedef struct complex_number{
    int real;
    int imagine;
} complex;

int main(){
    complex c1;

    printf("Enter the value of real number : ");
    scanf("%d",&c1.real);

    printf("Enter the value of imaginary number : ");
    scanf("%d",&c1.imagine);

    printf("The complex number is : %d + %di",c1.real , c1.imagine);

    return 0;
}