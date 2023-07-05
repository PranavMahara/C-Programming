#include<stdio.h>

int main(){
    int a = 6;
    int*b = &a;

    printf("The value of a is %d \n", a);
    printf("The value of a using b is %d \n", *b);

    printf("The address of a is %u \n", &a);
    printf("The address of a is %u \n", &b);


    printf("The value of a is %d \n", *(&a));
    printf("The value of b is %d \n", *(&b));


    return 0;
}