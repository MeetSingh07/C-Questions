// Write a program using functions to find average of three numbers.

#include<stdio.h>

int average(int n1 , int n2 , int n3);

int main(){
    int num1 , num2 , num3;

    printf("Enter the 1st number: ");
    scanf("%d",&num1);

    printf("Enter the 2nd number: ");
    scanf("%d",&num2);

    printf("Enter the 3rd number: ");
    scanf("%d",&num3);

     printf("The average of %d , %d , %d is %d",num1,num2,num3,average(num1,num2,num3));

    return 0;
}

int average(int n1 , int n2 , int n3){
   return (n1+n2+n3)/3;
}