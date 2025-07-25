// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include<stdio.h>
#include<string.h>

int main(){
    char str[6];
    char str1[6];

    printf("Enter the string of 5 characters: ");
    scanf("%s",str);

    printf("%s",str);

    while(getchar() != '\n');

    printf("\nEnter the second string of 5 characters: ");
    for(int i=0;i<5;i++){
        scanf("%c",&str1[i]);
    }
    str1[5]='\0';

    printf("%s",str1);

    if(strcmp(str,str1)==0){
        printf("The string is equal.");
    }
    else{
        printf("The string is not equal.");
    }

    return 0;
}