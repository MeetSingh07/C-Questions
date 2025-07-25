// Write a program containing functions which counts the number of positive integers in an array.

#include<stdio.h>

void printarray(int arr[],int size);
void count(int arr[],int size);
int main(){
    int arr[5]={1,2,-3,4,-5};

    printarray(arr,5);
    printf("\n");
    count(arr,5);

    return 0;
}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void count(int arr[],int size){
    int count=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]>=0){
            count++;
        }
    }

    printf("There are %d positive integers in the array.",count);
}