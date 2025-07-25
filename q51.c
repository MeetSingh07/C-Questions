// Write a program to determine wheather a student has passed or failed.
// To pass , a student requires a total of 40% and at least 33% in each subject.
// Assume there are three subjects and take the marks as input from the user.

#include<stdio.h>

int main(){
    int m1, m2, m3;

    printf("Enter the marks of 1st subject out of 100:");
    scanf("%d",&m1);

    printf("Enter the marks of 2nd subject out of 100:");
    scanf("%d",&m2);

    printf("Enter the marks of 3rd subject out of 100:");
    scanf("%d",&m3);

    int sum=m1+m2+m3;

    if(m1>=33 && m2>=33 && m3>=33 && sum>=120){
        printf("Pass!");
    }
    else{
        printf("Fail!");
    }

    return 0;
}