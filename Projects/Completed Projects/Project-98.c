// Write a program to calculate the sum of the digits of a 3-digit number which is entered from keyboard. E.g.-
// INPUT : 132        OUTPUT : 6

#include<stdio.h>

int main(){
    int n, remainder, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(n!=0){
        remainder = n%10;
        sum  = sum + remainder;
        n = n/10;
    }

    printf("The value of sum of integers is %d", sum);
    return 0;
}