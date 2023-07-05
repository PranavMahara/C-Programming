// Write a C program to determine whether a given number is prime or not.

#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    // if((a ==2 || a == 3 || a == 5 || a== 7) || (a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0)){
    //     printf("Entered 'a' is prime");
    // }
    // else{
    //     printf("Entered 'a' is not prime");
    // }

    ((a==2 || a==3 || a==5 || a==7) || (a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a!=1)) ? printf("Entered a is prime") : printf("Entered a is not prime");
    
    return 0;
}