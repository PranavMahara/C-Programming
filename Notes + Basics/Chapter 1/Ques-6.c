// According to the Gregorian calendar, it was Monday on the 
// date 01/01/1900. If any year is input through the keyboard 
// write a program to find out what is the day on 1st January of 
// this year. 

#include<stdio.h>  
  
int main(){  
    int start_year = 1900, year, leap = 0, diff, total_days = 0, day = 0;  
  
    printf("Enter a year between 1900 and 2099 --> ");  
    scanf("%d", &year);  
  
    diff = year - start_year;  
  
    while(start_year < year){  
        if(start_year % 100 == 0){  
            if(start_year % 400 == 0){  
                leap++;  
            }  
        }  

        else{  
            if(start_year % 4 == 0)  
            {  
                leap++;  
            }  
        }  

        start_year++;  
    }  
  
    total_days = (diff - leap) * 365 + leap * 366;  
    day = total_days % 7;  
  
    printf("The day on 01 January %d was ", year);  
  
    switch(day){  
        case 0: 
            printf("Monday.\n");  
            break;  
        case 1: 
            printf("Tuesday.\n");  
            break;  
        case 2: 
            printf("Wednesday.\n");  
            break;  
        case 3: 
            printf("Thursday.\n");  
            break;  
        case 4: 
            printf("Friday.\n");  
            break;  
        case 5: 
            printf("Saturday.\n");  
            break;  
        case 6: 
            printf("Sunday.\n");  
            break;  
    }  
  
    return 0;  
}  