// Write a recursive function to calculate the sum of 1st n natural numbers.

#include<stdio.h>

int sum(int n);

int main(){
    int n;

    printf("Enter the value of n to find the sum of first n natural numbers: ");
    scanf("%d",&n);

    printf("The sum of first %d natural numbers is %d",n,sum(n));

    return 0;
}

int sum(int n){

    if(n==1){
        return 1;
    }

    return n+sum(n-1);
}