// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include<stdio.h>

int main(){
    int quantity;
    printf("Please enter the quantities you want to buy (1 quantity is for 100 Rupees) --> ");
    scanf("%d", &quantity);

    int purchase;
    purchase = quantity*100;

    if(purchase>=1000){
        printf("Congratulations You will get 10 percent discount on your purchase \n");
        printf("Your total bill is now %d", 9*purchase/10.0);  // 10 percent, 100-10 = 90 percent amount to be paid now so 90/100*amount
    }
    else{
        printf("Sorry, You are not eligible for any discount!");
    }

    return 0;
}