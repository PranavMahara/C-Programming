#include<stdio.h>

int main(){
    int x = 5;
    x = x >> 1;

    printf("%d \n", x);
    x = x << 1;

    printf("%d \n", x);
    x = x << 2;

    printf("%d \n", x);
    x = x >> 2;

    printf("%d \n", x);
    x = x << 3;

    printf("%d \n", x);
    x = x >> 3;

    printf("%d \n", x);
    return 0;
}