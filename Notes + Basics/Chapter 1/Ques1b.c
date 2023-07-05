// Area of Rectangle using User Inputs

#include<stdio.h>

int main()
{
    int length, breadth;

    printf("Enter the value of length --> ");
    scanf("%d", &length);

    printf("Enter the value of breadth --> ");
    scanf("%d", &breadth);

    printf("Area is %d \n", length*breadth);


    // What if length and breadth are float

    float l, b;

    printf("Enter the value of l --> ");
    scanf("%f", &l);

    printf("Enter the value of b --> ");
    scanf("%f", &b);

    printf("Area is %f \n", l*b);

    // What if one of them is float and other is integer

    int len;
    float bre;

    printf("Enter the value of len --> ");
    scanf("%d", &len);

    printf("Enter the value of bre --> ");
    scanf("%f", &bre);

    printf("Area is %f \n", len*bre);

    return 0;
    }