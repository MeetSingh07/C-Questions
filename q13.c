// Write a program to sum first 10 natural numbers using while loop.

#include<stdio.h>

int main(){
    int sum=0,i=1;

    while(i<=10){
        sum=sum+i;
        i++;
    }

    printf("Sum is %d",sum);

    return 0;
}