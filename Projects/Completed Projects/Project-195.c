// Find all the odd numbers between m & n (take m and n from user) and find the sum of their cubes. 
// Also find all the even numbers between m & n and find the sum of their squares. 
// (Check whether m and n are 3 digit numbers and the difference between them should be >100).

#include<stdio.h>
#include<math.h>

int main(){
    int m, n;
    float sum = 0;
    float sum_even = 0;

    printf("Enter the value of n and m: ");
    scanf("%d %d", &n, &m);

    while(n<=m){
        printf("%d \n", n);
        sum = sum + pow(n, 3);
        
        n++;
    }

    while(n<=m){
        if(n%2==0){
            printf("Even --> %d \n", n);
            sum_even = sum_even + pow(n, 2);
        }
    }

    printf("The Sum is %.2f \n", sum);
    printf("The sum of even is %.2f \n", sum_even);
    
    return 0;
}