// Write a program to count the occurance of a given character in a string.

#include<stdio.h>

int main(){
    char str[50]="Hello World";

    char ch;

    printf("%s",str);

    printf("\nEnter the particular character to count its occurance in the string: ");
    scanf("%c",&ch);

    int count=0;

    int i = 0;

    while(str[i]!='\0'){
        if(str[i]==ch){
            count++;
        }
        i++;
    }

    printf("The number of occurance of \"%c\" in \"%s\" is %d.",ch,str,count);

    return 0;
}