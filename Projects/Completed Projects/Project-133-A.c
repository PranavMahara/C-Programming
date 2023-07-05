// Write a C program that accepts one four-digit number and separates the number into its individual digits, 
// and prints the digits separated from one another by two spaces each

#include<stdio.h>

int main(){
    int n, k, l, m, p;
    printf("Enter a 4 digit number: ");
    scanf("%d", &n);

    printf("%d  ", k = n/1000);
    n =  n - k*1000;
    printf("%d  ", l = n/100);
    n =  n - l*100;
    printf("%d  ", m = n/10);
    n =  n - m*10;
    printf("%d  ", p = n);
    return 0;
}