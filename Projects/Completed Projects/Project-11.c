// Write a program to enter the values of two variables from the keyboard and then interchange the values of the two variables. E.g.-
// If entered value of x is 5 and y is 10 then
// should print 10 5.

#include<stdio.h>

int main(){
    int x, y, temp;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;

    printf("The value of x is now %d \n", x);
    printf("The value of y is now %d \n", y);


    return 0;
}