// Write a program in C to check whether a given number is an ugly number or not.
// Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if((n==1)||(n%2==0 || n%3==0 || n%5==0) && (n%4!=0 && n%6!=0 && n%7!=0 && n%8!=0 && n%9!=0)){
        printf("%d is ugly", n);
    }

    else{
        printf("%d not ugly", n);
    }
    return 0;
}