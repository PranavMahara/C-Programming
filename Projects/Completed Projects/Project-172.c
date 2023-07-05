// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function

#include<stdio.h>
void sum(int n){
    int factorial = 1;
    int sum = 0;
    for(int i=1; i<=n; i++){
        factorial = factorial*i;
        sum = sum + factorial/i;
    }
    printf("The sum is %.2f", (float)sum);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    sum(n);


    return 0;
}