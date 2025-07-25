// Write your own function of strlen function from <string.h>.

#include<stdio.h>

void stringlen(char str[]);

int main(){
    char str[10];

    printf("Enter a string of maximum 10 characters: ");
    fgets(str,sizeof(str),stdin);

    stringlen(str);

    return 0;
}

void stringlen(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    int count = i-1;

    printf("The length of the string is : %d ",count);
}