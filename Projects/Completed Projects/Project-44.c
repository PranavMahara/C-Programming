// Write a C program to find the third angle of a triangle if two angles are given.

#include<stdio.h>

int main(){
    float A, B, C;

    printf("Enter the value of angle A --> ");
    scanf("%f", &A);

    printf("Enter the value of angle B --> ");
    scanf("%f", &B);

    printf("The value of angle C is %f ", 180-A-B);

    return 0;
}