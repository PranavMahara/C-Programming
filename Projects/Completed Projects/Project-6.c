#include<stdio.h>

int main(){
    float r;
    printf("Enter the value of radius --> ");
    scanf("%f", &r);
    float pi = 3.14;

    printf("The perimeter of circle of radius %.2f is %.2f", r, 2*pi*r);

    return 0;
}