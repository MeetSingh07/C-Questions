// Write a C program to calculate area of a rectangle

#include<stdio.h>

int main(){
    int length,breadth,area;

    printf("Enter the length: ");
    scanf("%d",&length);

    printf("Enter the breadth: ");
    scanf("%d",&breadth);

    area = length * breadth;

    printf("The area of rectangle is %d",area);

    return 0;
}