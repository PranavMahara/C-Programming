// Write a program in C to display n terms of natural number and their sum.

#include<stdio.h>

int main(){
    int i, n, sum = 0;
    i = 1;
    printf("Enter the value of n--> ");
    scanf("%d", &n);

    while(i<=n){
        printf("%d \n", i);
        sum = sum+i;
        i++;
    }
    printf("The sum of %d natural number is %d", n, sum);
    return 0;
}