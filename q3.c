    // Write a program to convert Celsius ( Centigrade degrees temprature to Fahrenheit )

    #include<stdio.h>

    int main(){
        float celsius;
        float fahrenheit;
        
        printf("Enter the temperature in celsius: ");
        scanf("%f",&celsius);

        fahrenheit=(celsius*1.8)+32;

        printf("\nThe temperature in fahrenheit is %.2f",fahrenheit);

        return 0;
    }