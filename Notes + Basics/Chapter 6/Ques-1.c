// Program to print address of a vairable. Use this address to get the value of variable

#include<stdio.h>

int main(){
    int b = 10;
    int*a = &b;
    printf("The value of b is %d \n", b);
    printf("The value of b is %d \n", *a);
    
    printf("The value of address of b is %u \n", &b);
    printf("The value of address of a is %u \n", &a);
    printf("The value of a is %d", *(&b));

    return 0;
}