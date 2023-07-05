// Write a C program that reads an integer and find all the divisors of the said integer.

#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        if(a%i==0){
            printf("%d \n", i);
        }
    }
    return 0;
}