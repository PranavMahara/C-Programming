// Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers.

//Input the first integer: 50 Input the second integer: 99

#include<stdio.h>

int main(){
    int sum = 0;
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    for(int a; a<b; a++){
        if(a%17!=0){
            printf("%d \n", a);
            sum = sum + a;
        }
    }
    printf("The sum is %d", sum);
    return 0;
}