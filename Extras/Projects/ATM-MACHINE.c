#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(){
    int p;
    srand(time(0));
    p = rand();
    printf("Pin --> %d \n", p); // Ofcourse this will not be displayed so chill!
    
    int pin;
    printf("Enter the pin for your Account XXXXX74895: ");
    scanf("%d", &pin);

    if(pin==p){
            int k;
            srand(time(0));
            k = rand();

            printf("The Balance in your Account XXXXX74895 is %d \n", k);

            printf("\n");
            printf("\n");

        char with;
        printf("Do you want to make cash withdrawl? \n");
        printf("Print Y/N on keyboard --> ");
        scanf(" %c", &with);

    if(with=='Y'){
        printf("1. Savings Account \n2. Current Account \n");
        int z;
        printf("Enter 1 or 2: ");
        scanf("%d", &z);

        int e;
        if(z==1){
            printf("Enter the amount: ");
            scanf("%d", &e);
        }

        if(z==2){
            printf("Enter the amount: ");
            scanf("%d", &e);
        }
        printf("\n");
        if(k>e){
        printf("Please collect your amount from the cash dispenser... \n");
        printf("The Amount Left is %d \n", k-e);
        printf("\n");
        }
        else{
            printf("Bhai/Bhen itne paise nahi hai! \n");
        }
        printf("Thank you for banking with ATG Bank \n");

    }
        else{
            printf("Thank you for banking with ATG Bank");
        }
    }

    else{
        printf("Pin does not match");
    }

    return 0;
}