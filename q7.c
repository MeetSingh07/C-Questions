// Calculate income tax paid by an employee to the government as per the slabs mentioned below:

// 2.5L-5L   - 5%
// 5.0L-10L  - 20%
// Above 10L - 30%

// Note that there is no tax below 2.5L.Take income amount as an input from the user.

#include<stdio.h>

int main(){
    int income ; float tax = 0;

    printf("Enter your annual income: ");
    scanf("%d",&income);

    if(income<0){
        printf("Enter valid income.");
    }
    else if(income<=250000){
        printf("Tax : %.2f",tax);
    }
    else if(income>250000 && income<=500000){
        tax = 0.05 * (income - 250000);
        printf("Tax = %.2f",tax);
    }
    else if(income>500000 && income<=1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        printf("Tax = %.2f",tax);
    }
    else{
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        printf("Tax = %.2f",tax);
    }

    return 0;
}