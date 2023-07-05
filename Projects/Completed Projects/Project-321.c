// Write a C program to find sum of digits of an integer uptoa single digit and check whether that final resultant number is prime or not.

#include <stdio.h>

int main(){
    int num;
    int sum = 0, rem;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while(num / 10 != 0){
        sum = 0;
        while (num != 0){
            rem = num % 10; 
            sum += rem;     
            num = num / 10; 
        }
        num = sum;
    }

    printf("%d", sum);

    return 0;
}