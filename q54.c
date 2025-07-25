    // Write a program to determine weather a character entererd by the user is lowercase or not?

    #include<stdio.h>

    int main(){
        char ch;

        printf("Enter a character (A-Z): ");
        scanf("%c",&ch);

        if(ch>='a' && ch<='z'){
            printf("%c is lowercase.",ch);
        }
        else if(ch>='A' && ch<='Z'){
            printf("%c is uppercase.",ch);
        }
        else{
            printf("Enter a valid character.");
        }

        return 0;
    }