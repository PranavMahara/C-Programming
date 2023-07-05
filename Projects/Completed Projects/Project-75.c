// Write a C program to calculate the sum all numbers between two given numbers (inclusive) not divisible by 7.

#include<stdio.h>

int main(){
    int a, b;
    int sum = 0;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);


    for(a; a<=b; a++){
            if(a%7!=0){
            printf("Numbers are %d \n", a);
            }
            
        }
    
    printf("The sum is %d", sum);
    return 0;
}

    // while(a<=b){
    //     if(a%7!=0){
    //         printf("%d \n", a);
    //         sum = sum + a;
    //     }
    //     a++;
    // }