// Write a program in C to find the square of any number using the function.

#include<stdio.h>
int square(int a);

int main(){
    int c;
    c = square(5);
    printf("The square of number is %d", c);

    return 0;
}

int square(int a){
    return a*a;
}