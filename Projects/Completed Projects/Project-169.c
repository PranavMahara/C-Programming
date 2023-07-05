// Write a program in C to find the square of any number using the function

#include<stdio.h>
int square(int n){
    return n*n;
}

int main(){
    int a;
    printf("Enter the number whose square you want to find:  ");
    scanf("%d", &a);

    printf("The square of the number %d is %d", a, square(a));
    return 0;
}