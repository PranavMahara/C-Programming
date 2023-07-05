// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5+.......+n

#include<stdio.h>

int main(){
    int n, factorial = 1; 
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        factorial = factorial*i;
        sum = sum + factorial/i;
        
    }
    printf("Factorial is %d \n", factorial);
    printf("Sum is %.2f", sum);
    return 0;
}