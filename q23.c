// Write a program having a variable "i". Print the address of "i". Pass this variable to a function and print it's address.
// Are these addresses same? 

#include<stdio.h>

void func(int*a);

int main(){
    int i=19;

    printf("The address of i is %p\n",&i);
    func(&i);
}

void func(int* a){
    printf("The address is %p",a);
}
