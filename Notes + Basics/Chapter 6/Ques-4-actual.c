// Write a program using functions which calculate the sum and average of two numbers.
// Use pointers and print the value of sum and average in main;



#include<stdio.h>
void sum_avg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}

int main(){
    int i, j, sum;
    float avg;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("Enter the value of j: ");
    scanf("%d", &j);

    sum_avg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avergae is %.2f \n", avg);

    return 0;
}