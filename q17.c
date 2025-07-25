// Write a program to change the value of the variable to ten times of its current value.

#include<stdio.h>

void ten_times(int* n);

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("The value is %d\n",num);

    ten_times(&num);

    printf("The value is %d",num);

}

void ten_times(int* n){
    *n = (*n)*10;
}