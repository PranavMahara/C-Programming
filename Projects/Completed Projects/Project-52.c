// Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.

#include<stdio.h>

int main(){
    int n, remainder, sum = 0;
    printf("Enter the value of n betweem 1 and 500: ");
    scanf("%d", &n);

    if(n<=500){
    while(n!=0){
        remainder = n%10;
        sum  = sum + remainder;
        n = n/10;
    }
    printf("The sum is %d", sum);
    }
    
    return 0;
}