// Write a program to encrypt a string by adding one to the ascii value of it's characters.

#include<stdio.h>

int main(){
    char str[50];
 
    printf("Enter a string upto 50 characters max.: ");
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='\n'){
            str[i]++;
        }
    }

    printf("Encrypted String = %s",str);

    return 0;
}