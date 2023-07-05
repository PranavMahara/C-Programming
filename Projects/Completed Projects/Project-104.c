// Write a program in C to display the first 10 natural numbers.

#include<stdio.h>

int main(){
    int i, n;

    i = 1;
    n = 10;

    while(i<=n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}