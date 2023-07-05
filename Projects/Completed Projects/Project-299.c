#include<stdio.h>
#include<math.h>
// The C library function double frexp(double x, int *exponent) return value is the mantissa, 
// and the integer pointed to by exponent is the exponent. The resultant value is x = mantissa * 2 ^ exponent.
int main(){
    double x = 1024, fraction;
    int e;

    fraction = frexp(x, &e);
    printf("x = %.2f = %.2f*2^%d \n", x, fraction, e);
    return 0;
}