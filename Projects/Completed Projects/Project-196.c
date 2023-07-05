// Write a C program to divide two integers (dividend and divisor) without using multiplication, division and mod operator.
// for perfectly divisble
#include<stdio.h>

int main(){
    int count = 0;
    int a, b;
    printf("Enter a, b --> ");
    scanf("%d %d", &a, &b);
    //  Keep subtracting the dividend from the divisor until dividend becomes less than divisor.
    // The dividend becomes the remainder, and the number of times subtraction is done becomes the quotient

    while(b>a){
        count++;
        b = b-a;
    }

    printf("Remainder --> %d", count+1);
    return 0;
}