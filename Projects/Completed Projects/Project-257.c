// C program to validate date (Check date is valid or not).

#include<stdio.h>

int main(){
    int date, month, year;
    printf("Enter the date in the form of DD/MM/YYYY --> ");
    scanf("%d/%d/%d", &date, &month, &year); // Enter in format like 07/12/2002   //Add slash


    
    if(month<=12 && month>=1){
        if((date>=1 && date<=31) && (month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12)){
            printf("The date is valid!");
        }
        else if((date>=1 && date<=30) && (month ==4 || month ==6 || month ==9 || month ==11)){
            printf("The date is valid!");
        }

        else if((date>=1 && date<=28) && (month ==2)){
                printf("Date is valid.\n");
        }        

        else if(date==29 && month==2 && (year%400==0 ||(year%4==0 && year%100!=0))){
                printf("Date is valid.\n");
        }        
        
        else{
            printf("The Date is invalid!");
        }
    }
    else{
        printf("The month is not valid!");
    }

    return 0;
}