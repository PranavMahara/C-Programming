// Write a program in C to read any Month Number in integer and display the number of days for this month

#include<stdio.h>

int main(){
    int n, num;
    printf("Enter integer (any ranging from 1 to 12): ");
    scanf("%d", &n);

    switch(n){
        case 1:
        printf("Entered Month is January \n");
        printf("January has 31 Days.");
        break;

        case 2:
        printf("Entered Month is February \n");
        printf("February has 30 Days.");
        break;

        case 3:
        printf("Entered Month is March \n");
        printf("March has 31 Days.");
        break;

        case 4:
        printf("Entered Month is April \n");
        printf("April has 30 Days.");
        break;

        case 5:
        printf("Entered Month is May \n");
        printf("May has 31 Days.");
        break;

        case 6:
        printf("Entered Month is June \n");
        printf("June has 31 Days.");
        break;

        case 7:
        printf("Entered Month is July \n");
        printf("July has 30 Days.");
        break;

        case 8:
        printf("Entered Month is August \n");
        printf("August has 31 Days.");
        break;

        case 9:
        printf("Entered Month is September \n");
        printf("September has 30 Days.");
        break;

        case 10:
        printf("Entered Month is October \n");
        printf("October has 31 Days.");
        break;

        case 11:
        printf("Entered Month is November \n");
        printf("November has 30 Days.");
        break;

        case 12:
        printf("Entered Month is December \n");
        printf("December has 31 Days.");
    }
    return 0;
}