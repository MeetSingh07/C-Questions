// Write a program to check weather a number is divisible by 97 or not.

#include<stdio.h>

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int remainder = num%97;

    printf("Remainder = %d",remainder);

    return 0;
}
