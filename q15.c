// Write a program to find the factorial of a given number using a for loop.

#include<stdio.h>

int main(){
    int num,fact=1;

    printf("Enter the number to find it's factorial: ");
    scanf("%d",&num);

    if(num<0){
        printf("Please enter a valid number.");
    }
    else if(num==0){
        printf("Factorial is 1.");
    }
    else{
        for(int i=1;i<=num;i++){
        fact*=i;
    }
    }

    printf("Factorial of %d  is %d",num,fact);

    return 0;
}