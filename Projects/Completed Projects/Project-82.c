// Write a C program to calculate the sum of two given integers and count the number of digits of the sum value

#include<stdio.h>

int main(){
    int sum, count = 0;
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    sum = a+b;
    printf("Sum is %d \n", sum);
    
    while(sum!=0){
        count++;
        sum/=10;
    }

    printf("Number of integers --> %d", count);
return 0;
}