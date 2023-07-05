// Write a program in C to find the prime numbers within a range of numbers.

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a, b --> ");
    scanf("%d %d", &a, &b);

    for(int a; a<=b; a++){
        if((a ==2 || a == 3 || a == 5 || a== 7) || (a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a!=1)){
            printf("Prime Number - %d \n", a);
            
        }
    }
    
return 0;
}