//  Write a program in C to check two numbers are Amicable numbers or not.

#include<stdio.h>

int main(){
    int sum_a = 0, sum_b = 0;
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    for(int i=1; i<a; i++){
        if(a%i==0){
            sum_a = sum_a + i;
        }
   }

    for(int i=1; i<b; i++){
        if(b%i==0){
            sum_b = sum_b + i;
        }
   }


    if(sum_a==b && sum_b==a){
        printf("%d and %d are amicable", a, b);
    }
    return 0;
}