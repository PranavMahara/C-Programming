// Write a C program that read the item’s price and create new item price and increased price of that item according to the item price table.

#include<stdio.h>

int main(){
    float price, inc_price;
    printf("Enter the price of the good you purchased: ");
    scanf("%f", &price);

    inc_price = price + 50;

    printf("The new price is %f \n", inc_price);

    printf("Percentage of increased price is %f", 50/inc_price*100);
    return 0;
}