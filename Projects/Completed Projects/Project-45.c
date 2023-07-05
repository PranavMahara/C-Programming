// Write a program in C to calculate the sum of three numbers with getting input in one line separated by a comma.

#include<stdio.h>

int main(){
    int a, b, c;
    
    printf("Enter the value of a --> ");
    scanf("%d", &a);

    printf("Enter the value of b --> ");
    scanf("%d", &b);

    printf("Enter the value of c --> ");
    scanf("%d", &c);

    printf("The sum of %d, %d, %d is %d", a, b, c, a+b+c);

    return 0;
}