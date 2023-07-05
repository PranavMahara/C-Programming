// Write a C program that reads an integer between 1 and 12 and print the month of the year in English. 

#include<stdio.h>

int main(){
    int i;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    if(i==1){
        printf("January");
    }
    
    else if(i==2){
        printf("February");
    }

    else if(i==3){
        printf("March");
    }

    else if(i==4){
        printf("April");
    }

    else if(i==5){
        printf("May");
    }

    else if(i==6){
        printf("June");
    }

    else if(i==7){
        printf("July");
    }

    else if(i==8){
        printf("August");
    }

    else if(i==9){
        printf("September");
    }

    else if(i==10){
        printf("October");
    }

    else if(i==11){
        printf("November");
    }

    else if(i==12){
        printf("December");
    }
    return 0;
}