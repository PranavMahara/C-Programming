// Write a C program to convert specified days into years, weeks and days

#include<stdio.h>

int main(){
    int Number_Of_Days, days, years, weeks;
    printf("Enter the number of days --> ");
    scanf("%d", &Number_Of_Days);

    printf("Years: %d \n", years = Number_Of_Days/365);

    Number_Of_Days = Number_Of_Days - years*365;

    printf("Weeks: %d \n", weeks = Number_Of_Days/7);

    days = Number_Of_Days - weeks*7;

    printf("Days: %d \n", days);

    return 0;
}