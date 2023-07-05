//  Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers.

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    int k = a+b;
    printf("The sum of 2 Numbers is %d \n", k);

    printf("Checking whether %d + %d is prime number \n", a, b);

    if(((k ==2 || k == 3 || k == 5 || k== 7) || k%2!=0 && k%3!=0 && k%5!=0 && k%7!=0 && k!=1)){
        printf("The sum which is %d is a prime number", k);
    }

    else{
        printf("The sum which is %d is not a prime number", k);
    }
    return 0;
}