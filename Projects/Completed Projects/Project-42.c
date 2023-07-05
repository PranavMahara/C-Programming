// Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

#include<stdio.h>

int main(){
    int minutes, hours;
    printf("Input Hours --> ");
    scanf("%d", &hours);

    printf("Input Minutes --> ");
    scanf("%d", &minutes);

    printf("Total Minutes is %d", hours*60+minutes);   


    return 0;
}