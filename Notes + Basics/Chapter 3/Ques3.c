#include<stdio.h>

int main(){
    int income;
    printf("Please enter your income ");
    scanf("%d", &income);
    
    if(income<=250000){
        printf("You dont need to pay any TAX %d", income);
    }

    else if(income>=500000){
        printf("You need to pay 5 percent TAX");  
    }

    else if(income<=1000000){
        printf("You need to pay 20 percent TAX");  
    }
    
    else if(income>1000000){
        printf("You need to pay 30 percent TAX");  
    }

    return 0;
}