// Write a c program to find out the sum of an A.P. series

#include<stdio.h>

int main(){
    float a, d, n;
    printf("Enter the value of a, d, n --> ");
    scanf("%f %f %f", &a, &d, &n);

    printf("The sum is %.2f", n/2*(2*a +(n-1)*d));

return 0;
}