#include<stdio.h>
#include<math.h>
//The C library function double fmod(double x, double y) returns the remainder of x divided by y.
int main(){
    double r, x, y;
    x = 8;
    y = 4;
    r = fmod(x, y);
    printf("The remainder is %d", r);
    return 0;
}