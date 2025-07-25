// Create a structure representing a bank account of a customer.

#include<stdio.h>
#include<string.h>

typedef struct BankAccount{
    int   acc_num;
    char  name[50];
    float balance;
}bank;

int main(){
    bank c1;

    printf("Enter the account number: ");
    scanf("%d",&c1.acc_num);

    while(getchar() != '\n');  // To clear buffer

    printf("Enter the account holder name: ");
    fgets(c1.name,sizeof(c1.name),stdin);
    c1.name[strcspn(c1.name,"\n")]='\0';  // Remove new line character from name

    printf("Enter the account balance: ");
    scanf("%f",&c1.balance);

    printf("The account number is : %d \n The account holder name is %s \n The account balance is %.2f \n",c1.acc_num,c1.name,c1.balance);

    return 0;
}
