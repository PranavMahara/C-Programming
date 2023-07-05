// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.

#include<stdio.h>

int main(){
    int length;
    printf("The value of length(in inches) is --> ");
    scanf("%d", &length);

    int breadth;
    printf("The value of breadth(in inches) is --> ");
    scanf("%d", &breadth);

    printf("Perimeter of rectangle is %d inches\n",length+breadth);
    printf("Area of rectangle is %d inches", length*breadth);

    return 0;
}