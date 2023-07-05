// //Write a C program to read an amount and break the value such that break 376 into small currency
//  500.00
//  100.00
//  50.00
//  20.00
//  10.00
//  5.00
//  2.00
//  1.00

#include<stdio.h>

int main(){
    int amount, fiveh, hundred, fifty, twenty, ten, five, two, one;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("500 Note: %d \n", fiveh = amount/500);
    amount = amount - fiveh*500;

    printf("100 Note: %d \n", hundred = amount/100);
    amount = amount - hundred*100;

    printf("50 Note: %d \n", fifty = amount/50);
    amount = amount - fifty*50;

    printf("20 Note: %d \n", twenty = amount/20);
    amount = amount - twenty*20;

    printf("10 Note: %d \n", ten = amount/10);
    amount = amount - ten*10;

    printf("5 Note: %d \n", five = amount/5);
    amount = amount - five*5;

    printf("2 Note: %d \n", two = amount/2);
    amount = amount - two*2;

    printf("1 Note: %d \n", one = amount);

    return 0;
}