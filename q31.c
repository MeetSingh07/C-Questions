// Create an array of size 3X10 containing multiplication table of the numbers 2, 7 and 9 respectively.

#include<stdio.h>

int main(){
    int table[3][10];
    int number[3];

    printf("Enter 3 numbers to get their multiplication table.\n");

    for(int i=0;i<3;i++){
        printf("Enter %d number: ",i+1);
        scanf("%d",&number[i]);
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            table[i][j]=number[i]*(j+1);
        }
    }

    for(int i=0;i<3;i++){
        printf("Multiplication table of %d.\n",number[i]);
        for(int j=0;j<10;j++){
            printf("%d X %d = %d\n",number[i],j+1,table[i][j]);
        }
        printf("\n");
    }

    return 0;
    }