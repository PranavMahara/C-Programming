// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) 
// traveled (in km) and spent fuel (in liters, float number – 2 decimal point).

#include<stdio.h>

int main(){
    float distance, fuel;
    printf("Total distance(in km) travelled is ");
    scanf("%f", &distance);

    printf("Total fuel(in L) consumed is ");
    scanf("%f", &fuel);

    printf("Average is %.2f Km/L", (distance/fuel));

    return 0;
}