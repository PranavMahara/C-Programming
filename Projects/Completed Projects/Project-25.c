// //Write a C program that accepts an employee's ID, 
// total worked hours of a month and the amount he received per hour. 
// Print the employee's ID and salary (with two decimal places) of a particular month

#include<stdio.h>

int main(){
    int employee_ID;
    printf("Enter the ID of the employee --> ");
    scanf("%d", &employee_ID);

    int Working_Hours;
    printf("Enter the number of working hours of the employee --> ");
    scanf("%d", &Working_Hours);

    int Salary_Amount_Per_Huour = 15000;

    printf("Salary per Hour of employee is $%d", Working_Hours*15000);

    return 0;
}