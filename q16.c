// Write a program to check weather a given number is prime or not using loops.

#include<stdio.h>

int main(){
    int num,prime=1;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num<=1){
        prime=0;
    }
    else{
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
}

    if(prime){
        printf("The entered number is a prime number.");
    }
    else{
        printf("The entered number is not a prime number.");
    }

    return 0;
}