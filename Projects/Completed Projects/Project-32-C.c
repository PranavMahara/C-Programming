//  Write a C program that reads an integer between 1 and 12 and print the month of the year in English using switch case

#include<stdio.h>

int main(){
    int n, num;
    printf("Enter integer (any ranging from 1 to 12): ");
    scanf("%d", &n);

    switch(n){
        case 1:
        printf("Entered Month is January \n");
        break;

        case 2:
        printf("Entered Month is February \n");
        break;

        case 3:
        printf("Entered Month is March \n");
        break;

        case 4:
        printf("Entered Month is April \n");
        break;

        case 5:
        printf("Entered Month is May \n");
        break;

        case 6:
        printf("Entered Month is June \n");
        break;

        case 7:
        printf("Entered Month is July \n");
        break;

        case 8:
        printf("Entered Month is August \n");
        break;

        case 9:
        printf("Entered Month is September \n");
        break;

        case 10:
        printf("Entered Month is October \n");
        break;

        case 11:
        printf("Entered Month is November \n");
        break;

        case 12:
        printf("Entered Month is December \n");
    }
    return 0;
}