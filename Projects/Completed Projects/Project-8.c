// Enter two numbers from keyboard. Write a program to check if the two numbers are equal.

#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a --> ");
    scanf("%d", &a);

    int b;
    printf("Enter the value of b --> ");
    scanf("%d", &b);

    if(a==b){
        printf("The value of a and b are equal");
    }

    else{
        printf("a and b are not equal");
    }


    return 0;
}