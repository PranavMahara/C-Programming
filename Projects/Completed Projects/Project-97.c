// Write a program to reverse a 3-digit number which is entered from keyboard. E.g.-
// INPUT : 132        OUTPUT : 231

#include<stdio.h>

int main(){
    
    int n, remainder;
    int rev = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(n!=0){
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }
    printf("The reversed number is %d", rev);
    
    return 0;
}