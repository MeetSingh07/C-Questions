// Write a program to decrypt the string encrypted using encrypt function in problem 37.

#include<stdio.h>

int main(){
    char str[50];

    printf("Enter the encrypted string to decrypt it: ");
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='\n'){
            str[i]--;
        }
    }

    printf("Decrypted String = %s",str);

    return 0;
}