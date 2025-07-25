// Write a function to convert celsius to fahrenheit.

#include<stdio.h>

float celsius_to_fahrenheit(float celsius);

int main(){
    float celsius;

    printf("Enter the temperature in celsius: ");
    scanf("%f",&celsius);

    printf("Temperature in fahrenheit is %.2f",celsius_to_fahrenheit(celsius));

    return 0;
}

float celsius_to_fahrenheit(float celsius){
    return ((celsius*1.8)+32);
}