// Write a C program that reads an integer and find all its divisor.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number jiske aap divisors prapt karna chahte ho: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("Divisors are %d \n", i);
        }
    }
   

    return 0;
}