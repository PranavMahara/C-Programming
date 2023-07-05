// Finding Area of Rectangle

#include<stdio.h>

int main()
{
    int length = 10;
    int breadth = 20;
    printf("Area of Rectangle I is %d \n", length*breadth);

    // What if length and breadth is in decimal

    float len = 10.8;
    float bre = 34.3;
    printf("Area of Rectangle II %f \n", len*bre);

    // What if one of them is float and other is int

    float l = 10.8;
    int b = 34;
    printf("Area of Rectangle III is %f \n", l*b);


    return 0;
}