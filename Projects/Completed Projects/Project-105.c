// Write a C program to find the sum of first 10 natural numbers

#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    printf("The sum is %d", sum);
    return 0;
}