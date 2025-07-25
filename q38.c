// Write a program to illustrate the use of arrow -> operator in C.

#include<stdio.h>
#include<string.h>

struct book{
    char title[50];
    char author[50];
    float price;
};

int main(){
    struct book b1;
    struct book *ptr=&b1;

    strcpy(ptr->title,"Harry Potter");
    strcpy(ptr->author,"William Douglas");
    ptr->price=199.99;

    printf("The title is %s , author is %s and price is %.2f",ptr->title,ptr->author,ptr->price);

    return 0;
}