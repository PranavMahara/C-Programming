#include<stdio.h>
#include<math.h>

int main(){
    double m, n;
    double r;
    n = 30.9;
    r = modf(n, &m);
    printf("The value of r is %f", r);
    return 0;
}