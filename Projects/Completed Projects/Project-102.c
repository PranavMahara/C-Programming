// Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.

#include<stdio.h>

int main(){
    int a, b;
    int sum = 0;
    printf("Enter a --> ");
    scanf("%d", &a);

    printf("Enter b --> ");
    scanf("%d", &b);

    while(a<=b){
        if(a%2!=0){
            printf("%d \n", a);  
            sum = sum + a;    
        }
        a++;
    }

    printf("The sum is %d", sum);
    
    return 0;
}