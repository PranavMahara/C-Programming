// Write a program to add three given numbers using function.

#include<stdio.h>
int sum(int x, int y, int z){
    int d = x + y + z;
    return d;
}

int main(){
    int a, b, c;
    printf("Enter 3 numbers --> ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The sum of 3 numbers is %d", sum(a, b, c));
    return 0;
}