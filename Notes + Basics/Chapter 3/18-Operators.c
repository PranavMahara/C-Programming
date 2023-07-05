#include<stdio.h>

int main(){

    // Sizeof Operator
    printf("%d \n", sizeof(char)); // Size of Operator --> Used to determine the size of int, char, float, double.
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(double));

    // Comma Operator
    int a, x;
    a = (x=5, x=2); // Coma Operator functions from left to right
    printf("The value of a is %d", a);

    return 0;
}