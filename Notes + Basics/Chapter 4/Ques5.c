#include<stdio.h>

int main(){

    float n;
    printf("Enter the value of n --> ");
    scanf("%f", &n);

    printf("The sum of first %f natural number is %f ", n , (n*n)/2 + n/2);

    return 0;
}