// Write a C program to find the angle between (12:00 to 11:59) the hour hand and the minute hand of a clock.

#include<stdio.h>

int main(){
    float hours_1, mins_1, hours_2, mins_2, diff_1, diff_2;
    printf("Enter hours for 1: ");
    scanf("%f", &hours_1);

    printf("Enter minutes for 1: ");
    scanf("%f", &mins_1);
    
    printf("So Clock-1 Time in minutes is %.2f \n", diff_1 = 60*hours_1+mins_1);

    printf("Enter hours for 1: ");
    scanf("%f", &hours_2);

    printf("Enter minutes for 1: ");
    scanf("%f", &mins_2);

    printf("So Clock-2 Time in minutes is %.2f \n", diff_2 = 60*hours_2+mins_2);

    if(diff_1>diff_2){
        printf("The angle between both time is %.2f Degrees", (diff_1-diff_2)*0.5);   // 720 mins in 12 hours and 360 degree so 1 minute is 0.5 degree
    }
    else{
        printf("The angle between both time is %.2f Degrees", (diff_2-diff_1)*0.5);
    }

    
    return 0;
}