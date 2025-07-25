// Write a program containing a function which reverses the array passed to it.

#include<stdio.h>

void reverse(int arr[],int size);

int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        printf("Enter element at %d index: ",i);
        scanf("%d",&arr[i]);
    }

    reverse(arr,5);

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

void reverse(int arr[],int size){
    int temp;
    
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}