#include<stdio.h>

int main(){
    int a;
    printf("The value of a is  --> ");
    scanf("%d", &a);

    a++; // a+++ is wrong 

    printf("The next value of a++ is %d --> \n ", a++);

    float b;
    printf("The value of b is  --> ");
    scanf("%f", &b);

    b++; // b+++ is wrong

    printf("The next value of b++ is %f --> ", b++);





    return 0;
}