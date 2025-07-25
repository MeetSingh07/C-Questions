// Write a program to check weather a given character is present in a string or not?

#include<stdio.h>

int main(){
    char str[50];

    printf("Enter a string upto 50 characters: ");
    fgets(str,sizeof(str),stdin);

    char ch;

    printf("\nEnter the character to check if it's present in the string or not: ");
    scanf("%c",&ch);

    int present=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            present=1;
            break;
        }
    }

    if(present==1){
        printf("Yes, \"%c\" is present in the string.",ch);
    }
    else{
        printf("No, \"%c\" is not present in the string.",ch);
    }

    return 0;
}