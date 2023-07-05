// Write a C program to read the value of an integer m and n
// display the value of n is 1 when m is larger than 0, 
// 0 when m is 0 and -1 when m is less than 0.

#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n>0){
        printf("Since n is positive so m is %d", 1);
    }

    else if(n==0){
        printf("Since n is zero so m is %d", 0);
    }

    else if(n<0){
        printf("Since n is negative so m is %d", -1);
    }
    return 0;
}