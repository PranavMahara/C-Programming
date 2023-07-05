// Write a C program that reads in two integers and 
// check whether the first integer is a multiple of the second integer.

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a--> ");
    scanf("%d", &a);

    printf("Enter the value of b--> ");
    scanf("%d", &b);

    if(b%a==0){
        printf("%d is a multiple of %d", b, a);
                
    }

    return 0;
}