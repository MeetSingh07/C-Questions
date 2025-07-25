// Write your own function of strcpy function from <string.h>

#include<stdio.h>

void stringcpy(char target[] , char source[]);

int main(){
    char str1[50]="Hello";
    char str2[50]="World";

    stringcpy(str2 , str1);

    printf("%s %s",str1 , str2);

    return 0;
}

void stringcpy(char target[] , char source[]){
    int i=0;

    while(source[i]!='\0'){
        target[i]=source[i];
        i++;
    }

    target[i]='\0';

}