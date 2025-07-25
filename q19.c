// Write a program using a function which calculates the sum and average of two numbers.
// Use pointers and print the values of sum and average in main().

#include<stdio.h>

void Sum(int n1 , int n2 , int* sum);
void Avg(int n1 , int n2 , int* avg);

int main(){
    int num1 , num2 , sum=0 , avg=0;

    printf("Enter the number 1: ");
    scanf("%d",&num1);

    printf("Enter the number 2: ");
    scanf("%d",&num2);

    Sum(num1,num2,&sum);

    Avg(num1,num2,&avg);

    printf("The sum of %d and %d is %d\n",num1,num2,sum);
    printf("The average of %d and %d is %d\n",num1,num2,avg);

    return 0;
}

void Sum(int n1 , int n2 , int* sum){
    *sum=n1+n2;
}

void Avg(int n1 , int n2 , int* avg){
    *avg=(n1 + n2)/2;
}