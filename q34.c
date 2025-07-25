// Write a program to calculate simple interest for a set of values representing principal , number of years and rate of interest.

#include<stdio.h>

int main(){
    float principal,rate,time,si;

    printf("Enter the principal: ");
    scanf("%f",&principal);

    printf("\nEnter the rate: ");
    scanf("%f",&rate);

    printf("\nEnter the time: ");
    scanf("%f",&time);

    si=(principal*rate*time)/100;

    printf("\nThe Simple Interest is %.2f",si);

    return 0;
}