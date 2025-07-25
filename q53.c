// Create an array dynamically capable of storing 5 integers.Now use realloc so that it can now store 10 integers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    int *ptr;
    printf("Enter the size: ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    for(int i=0;i<size;i++){
        printf("Enter value at %d index: ",i);
        scanf("%d",&ptr[i]);
    }
    printf("Enter new size: ");
    scanf("%d",&size);
    ptr=(int*)realloc(ptr,size*sizeof(int));
    for(int i=0;i<size;i++){
        printf("Enter value at %d index: ",i);
        scanf("%d",&ptr[i]);
    }
    free(ptr);
    return 0;
}