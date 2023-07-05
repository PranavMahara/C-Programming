// When interest compounds q times per year at an annual rate of 
// r % for n years, the principle p compounds to an amount a as per
// the following formula 
// a = p ( 1 + r / q ) ^ nq

#include<stdio.h>
#include<math.h>

int main(){
    float p, q, r, n;
    scanf("%f %f %f", &p, &q, &r, &n);

    float result = p*(pow((1+r/q), n*q));
    printf("%f", result);


    return 0;
}