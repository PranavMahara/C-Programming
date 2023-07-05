// Write a C program to check whether a triangle can be formed by the given value for the angles.

#include<stdio.h>

int main(){
    float A, B, C;
    printf("Enter the value of angles A, B, C: ");
    scanf("%f %f %f", &A, &B, &C);

    if((A+B+C)==180){
        printf("Triangle is possible");
    }

    else{
        printf("Triangle is not possible");
    }

    return 0;
}