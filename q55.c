// Reverse an array

#include<stdio.h>

void display(int size , int arr[]);

int main(){
    int size;

    printf("How many elements you want to write? : ");
    scanf("%d",&size);

    int arr[size];

    for(int i=0;i<size;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int reversed_arr[size];

    for(int i=0;i<size;i++){
        reversed_arr[i]=arr[size-1-i];
    }

    display(size,arr);
    display(size,reversed_arr);

    return 0;
}

void display(int size , int arr[]){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}