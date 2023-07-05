#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("The value of a is %100d \n", a); // This gives space like 100 will be printed after 100 places

    float b;
    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("The value of b is %.2f", b); // This will print float upto 2 decimal places only
    return 0;
}