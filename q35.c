// Write a function slice to slice a string. It should change the original string such that it is now the sliced string.
// Take 'm' and 'n' as the start and ending position for slice.

#include<stdio.h>

void slice(char str[] , int m , int n);

int main(){
    char str[50]="HelloWorld";

    int m , n;

    printf("%s",str);

    printf("\nEnter the start and ending index to slice the above string:\n");
    printf("Starting index: ");
    scanf("%d",&m);
    printf("Ending index: ");
    scanf("%d",&n);

    slice(str , m , n);

    printf("Sliced string : %s",str);

    return 0;
}

void slice(char str[] , int m , int n){
    int i=0;

    while(m<=n && str[m] != '\0'){
        str[i]=str[m];
        i++;
        m++;
    }

    str[i]='\0';

}