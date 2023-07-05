// Write a program to calculate the sum of the first and the last digit of a 5 digit number entered from the keyboard.

#include<stdio.h>

int main(){
    int n, firstnum, lastnum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    lastnum = n%10;

    while(n>=10){
        n = n/10;
    }

    firstnum = n;

    printf("firstnum is %d \n", firstnum);
    printf("lastnum is %d \n", lastnum);

    printf("Sum of first and last is %d", firstnum + lastnum);
    
    return 0;
}