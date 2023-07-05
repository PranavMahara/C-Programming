#include<stdio.h>
float avg(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter the value of a b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Average of 3 numbers is %f", avg(a, b, c));
    return 0;
}

float avg(int a, int b, int c){
    float result;
    result = (float)(a+b+c)/3;
    return result;
}