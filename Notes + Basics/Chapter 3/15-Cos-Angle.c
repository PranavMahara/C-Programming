#include<stdio.h>
#include<math.h>

int main(){
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    x=x*3.14159/180; // Radian to Degree //

    printf("The value of cos(%.0f) is %.2f", x, cos(x));
    return 0;
}