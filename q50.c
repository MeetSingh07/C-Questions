// Create an array of multiplication number of 7 upto 10.
// Use realloc to make it store 15 number.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,size;
    printf("Enter the number to get its multiplication number: ");
    scanf("%d",&num);
    printf("\nEnter the size: ");
    scanf("%d",&size);
    int *ptr=(int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        ptr[i]=num*(i+1);
        printf("%d X %d = %d\n",num,i+1,num*(i+1));
    } 
    printf("Enter the new size: \n");
    scanf("%d",&size);
    ptr=(int*)realloc(ptr,size*sizeof(int));
    for(int i=0;i<size;i++){
        ptr[i]=num*(i+1);
        printf("%d X %d = %d\n",num,i+1,num*(i+1));
    } 
    free(ptr);
    return 0;
}