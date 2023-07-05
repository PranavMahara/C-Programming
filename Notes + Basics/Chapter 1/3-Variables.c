#include <stdio.h>

int main(){ 
    
    int a = 234;
    // int b = 12.23 this is wrong b is float
    int d = 2345;
    long f = 132654;
    float b = 8.5; // can be negative as well 
    char c = 'u';
    double l = 123123.123;

    // char dt = '31st December 2029';
    printf("The value of a is %d \n", a); // %d is for integers \n is escape character
    printf("The value of a is %d %d \n", a, a);
    printf("The value of b is %f \n", b); // %f is for float
    printf("The value of c is %c \n", c); // %c is for character 
    printf("The value of f is %d \n", f); // a long is same as int
    printf("Sum of a and d is %d \n", a+d); // other way we can do int e = 234+2345;  try for difference and Multiplication
    // printf("The value of dt is %c \n", dt); fail hoga 2029 aagya
    printf("The value of f is %f", l); // double is same as float

    return 0; 
}