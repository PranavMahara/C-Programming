// Write a C program that converts kilometers to miles

#include<stdio.h>

int main(){
    float kilometer;
    printf("Enter the value of distance(in kilometer) --> ");
    scanf("%f", &kilometer);

    printf("Distance in miles is %.2f", 0.621371192237334*kilometer);  // 1 mile is equal to 1.609344 kilometers.---> 0.621371192237334 mile is 1 km

    return 0;
}