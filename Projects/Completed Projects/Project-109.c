// Write a program in C to display the n terms of odd natural number and their sum

#include<stdio.h>

int main(){
    int n;
    int i = 1;
    int sum = 0;

    printf("Enter the value of n--> ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d \n", i);
        sum = sum + i;
        i+=2;

    }
    printf("Sum of odd numbers is %d", sum);

    return 0;
}