// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.

#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    printf("Enter the value of a --> ");
    scanf("%f", &a);

    printf("Enter the value of b --> ");
    scanf("%f", &b);

    printf("Enter the value of c --> ");
    scanf("%f", &c);

    
    printf("Bhaskara's formula is %f", pow(pow(b, 2) - 4*a*c, 1/2));
    return 0;
}