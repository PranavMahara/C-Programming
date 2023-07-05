// Write a program in c to find the Sum of GP series

#include<stdio.h>
#include<math.h>

int main(){
    float a, r, n;
    printf("Enter a, r, n --> ");
    scanf("%f %f %f", &a, &r, &n);

    float k = (a*(pow(r, n)-1))/(r-1);

    printf("The sum of GP is %.2f", k);
return 0;
}