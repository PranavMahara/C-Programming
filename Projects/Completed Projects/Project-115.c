// Write a program in C to calculate and print the Electricity bill of a given customer. 
// The customer id., name and unit consumed by the user should be taken from the keyboard and 
// display the total amount to pay to the customer. 
// The charge are as follow : Go to the editor

// Unit	Charge/unit
// upto 199	@1.20
// 200 and above but less than 400	@1.50
// 400 and above but less than 600	@1.80
// 600 and above	@2.00
// If bill exceeds Rs. 400 then a surcharge of 15% will be charged 

#include<stdio.h>

int main(){
    int ID;
    float unit, bill;
    printf("Enter Customer ID: ");
    scanf("%d", &ID);

    char name[100];
    printf("Enter Name of the Person--> ");
    scanf("%s", name);

    printf("Number of Units consumed by the customer: ");
    scanf("%f", &unit);

    if(unit<200){
        printf("charge/unit is Rs 1.20 \n");
        printf("Total Bill is %.2f \n", bill = unit*1.20);
    }
    else if(unit>=200 && unit<400){
        printf("charge/unit is Rs 1.50 \n");
        printf("Total Bill is %.2f \n", bill = unit*1.50);
    }
    else if(unit>=400 && unit<600){
        printf("charge/unit is Rs 1.80 \n");
        printf("Total Bill is %.2f \n", bill = unit*1.80);
    }
    else if(unit>=600){
        printf("charge/unit is Rs 2.00 \n");
        printf("Total Bill is %.2f \n", bill = unit*2.00);
    }

    if(bill>400){
        printf("Since your bill is more than Rs 400 then 15 percent is added so final bill is %f", bill + 0.15*bill); // 15 percent is 15/100*bill
    }


    return 0;
}