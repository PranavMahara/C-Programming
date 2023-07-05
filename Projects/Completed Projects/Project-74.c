// Write a C program that accepts two integers values and calculate the sum of all even values between them

#include<stdio.h>

int main(){
    int sum = 0;
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    while(a<=b){
        if(a%2==0){
            printf("Even --> %d \n", a);
            sum = sum + a;
        }
        a++;
    }

    printf("The sum is %d", sum);
    return 0;
}
