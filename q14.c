// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.

#include<stdio.h>

int main(){
    int n,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++){
        sum+=n*i;
        
    }

    printf("Sum of the numbers occurring in the multiplication table of %d is %d",n,sum);

    return 0;
}