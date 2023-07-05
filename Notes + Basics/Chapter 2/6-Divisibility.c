// Checking whether number is divisible by 97 or not

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("Divisibility test returns (Remainder is): %d \n", num%97);   // % cant be applied on float
    return 0;
}