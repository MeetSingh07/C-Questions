// Write a function sum vector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.

#include<stdio.h>

struct vectors{
    int i;
    int j;
};

struct vectors sumvector(struct vectors v1 , struct vectors v2);

int main(){
    struct vectors v1 = {1,2} , v2 = {5,6};

    sumvector(v1 , v2);

    return 0;
}
struct vectors sumvector(struct vectors v1 , struct vectors v2){
    struct vectors v3 = {v1.i+v2.i,v1.j+v2.j};
    printf("The sum of vector 1 and 2 is %di + %dj",v3.i,v3.j);
}


