// Write a C program that read 5 numbers 
// counts the number of positive numbers and negative numbers.

#include<stdio.h>

int main(){
    int positive = 0, negative = 0;
    int num[5];
    for(int i=0; i<5; i++){
        printf("Enter the value of %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for(int i=0; i<5; i++){
        if(num[i]>0){
            positive++;
        }
        else if(num[i]<0){
            negative++;
        }
    }

    printf("Number of positive is %d \n", positive);
    printf("Number of negative is %d \n", negative);

    return 0;
}