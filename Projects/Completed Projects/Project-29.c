// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include<stdio.h>

int main(){
    int seconds, minutes, hour;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    printf("The time in hour is %d hour \n", hour = seconds/3600);
    seconds = seconds - hour*3600;
    printf("The time in minutes is %d minutes \n", minutes = seconds/60);
    seconds = seconds - minutes*60;
    printf("The time in seconds are %d seconds", seconds);

    return 0;
}