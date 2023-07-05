// Write a program in C to find the sum of all elements of the array

#include<stdio.h>

int main(){
    int total_sum = 0;

    int n;
    printf("Enter the value of digits --> ");
    scanf("%d", &n);

    int sum[n];

    for(int i = 0; i<n; i++){
        printf("Enter the value of number %d : ", i+1);
        scanf("%d", &sum[i]);
    }

     for(int i = 0; i<n; i++){
        printf("The sum of %d \n", sum[i]);
        total_sum = total_sum + sum[i];
    }

    
    printf("The total sum is %d \n", total_sum);
return 0;
}