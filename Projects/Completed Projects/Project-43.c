// Write a program in C that takes minutes as input, and display the total number of hours and minutes.

#include<stdio.h>

int main(){
    int minutes;
    int hours;
    printf("Enter the number of minutes --> ");
    scanf("%d",  &minutes);

    hours = minutes/60;

    printf("%d hours, %d minutes", hours, minutes-hours*60);

    return 0;
}