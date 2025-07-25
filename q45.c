// Create an array of 5 complex numbers created in problem 44 and display them with the help of an display function. 
// The values must be taken as an input from the user.

#include<stdio.h>

typedef struct complex_number{
    int real;
    int imagine;
}complex;

void display(complex c[]);

int main(){
    complex c[5];

    for(int i=0;i<5;i++){
        printf("Complex Number %d\n",i+1);

        printf("Enter the value of real number: ");
        scanf("%d",&c[i].real);

        printf("Enter the value of imaginary number: ");
        scanf("%d",&c[i].imagine);
    }

    display(c);

    return 0;
}

void display(complex c[]){
    for(int i=0;i<5;i++){
    printf("The %d complex number is: %d + %di\n",i+1,c[i].real,c[i].imagine);
    }
}