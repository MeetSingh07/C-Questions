// Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *ptr;
    ptr=(int*)malloc(size*sizeof(int));
    // ptr=(int*)calloc(size,sizeof(int));
    for(int i=0;i<size;i++){
        printf("Enter value at %d index: ",i);
        scanf("%d",&ptr[i]);
    }
    free(ptr);
    return 0;
}