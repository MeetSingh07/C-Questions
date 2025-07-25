// Write a function and pass the value by reference.

#include<stdio.h>

void sum(int* n1 , int* n2);

int main(){
    int n1 = 5 , n2 = 10;

    sum(&n1,&n2);

    return 0;
}

void sum(int* n1, int* n2){
    printf("The sum is %d ",*n1+*n2);
}