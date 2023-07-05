// Write a C program to calculate the distance between the two points

#include<stdio.h>
#include<math.h>

int main(){
    float x1, x2, y1, y2;
    printf("Enter the value of x1 --> ");
    scanf("%f", &x1);

    printf("Enter the value of x2 --> ");
    scanf("%f", &x2);

    printf("Enter the value of y1 --> ");
    scanf("%f", &y1);

    printf("Enter the value of y2 --> ");
    scanf("%f", &y2);

    float z;
    z = pow(x2-x1, 2) + pow(y2-y1, 2);

    printf("The distance between 2 points is %f", sqrt(z));

    return 0;
}