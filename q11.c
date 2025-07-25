// Write a program using recursion to calculate nth element of Fibonacci series.

#include<stdio.h>

int fib(int n);

int main(){
    int n;

    printf("Enter the value of n to find the nth value of fibonacci series: ");
    scanf("%d",&n);

    printf("The value of fibonacci series at %d is %d",n,fib(n));

}

int fib(int n){
    if(n==1 || n==2){
        return n-1;
    }   

    return fib(n-1)+fib(n-2);
}