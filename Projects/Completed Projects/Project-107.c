// Write a program in C to read 10 numbers from keyboard and find their sum and average.

#include<stdio.h>

int main(){
    int sum = 0;
    float average;
    int num[10];

    for(int i=0; i<10; i++){
        printf("Enter the value of %d --> ", i+1);
        scanf("%d", &num[i]);

        sum = sum + num[i];
    }

    printf("The sum of all numbers is %d \n", sum);
    printf("The average of all numbers is %.2f", sum/10.0);

    return 0;
}