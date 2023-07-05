// Write a C program that read n numbers and sum of all odd values between them.

#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter how many numbers do u wish to enter: ");
    scanf("%d", &n);

    int num[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of %d --> ", i+1);
        scanf("%d", &num[i]);
    }
    for(int i=0; i<n; i++){
        if(num[i]%2!=0){
            sum = sum + num[i];
        }
    }

    printf("Sum of odd is %d", sum);


    return 0;
}