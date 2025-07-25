// Take name and salary of two employees as input from the user and write them to a text file in the following format:
// i. Name1 , salary
// ii. Name2 , salary

#include<stdio.h>

int main(){
    int salary1 , salary2;
    char name1[50] , name2[50];

    FILE *ptr=fopen("test3.txt","w");

    if(ptr == NULL){
        printf("File does not exist.");
    }

    printf("Enter the name of the 1st employee: ");
    scanf("%s",name1);
    printf("Enter the salary of the 1st employee: ");
    scanf("%d",&salary1);

    printf("Enter the name of 2nd employee: ");
    scanf("%s",name2);
    printf("Enter the salary of 2nd employee: ");
    scanf("%d",&salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s"," , ");
    fprintf(ptr,"%d",salary1);
    
    fprintf(ptr,"%c",'\n');

    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s"," , ");
    fprintf(ptr,"%d",salary2);
    
    fclose(ptr);

    return 0;
}