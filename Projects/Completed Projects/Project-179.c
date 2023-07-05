// Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
// Put x = 2

#include <stdio.h>
#include <math.h>

int main(){

    float x;
    printf("Enter Value of x: ");
    scanf("%f", &x);
    
    if(x==0)
     printf("Value of sin(1/x) is Not Possible");

    else{      
      printf("Value of sin(1/x): %.4f", sin((1/x)*3.14159/180));
    }
    return 0;
}