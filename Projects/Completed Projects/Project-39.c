// Write a C program to print all numbers between 1 to n which divided by a specified number and the remainder will be 3

#include<stdio.h>

int main(){
    int n, spec_number;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of number jisse aap divide karwana chahte ho: ");
    scanf("%d", &spec_number);

    for(int i=1; i<=n; i++){
        if(i%spec_number==3){
            printf("The number which when divided gives remainder 3 are %d \n", i);
        }
    }
    return 0;
}