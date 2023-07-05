#include<stdio.h>

int main(){
    float a, b, c, x, y, z;
    a = 9;
    b = 12;
    c  = 3;

    x = a-b/3+c*2-1;
    y = a-b/(3+c)*(2-1);
    z = a-(b/(3+c)*2)-1;  

    printf("The value of x is %.2f \n", x);
    printf("The value of y is %.2f \n", y);
    printf("The value of z is %.2f \n", z);
    return 0;
}