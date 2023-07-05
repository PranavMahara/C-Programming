// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include<stdio.h>

int main(){
    float time;
    int salary;
    printf("Enter the time period of your service(in years) --> ");
    scanf("%f", &time);

    if(time>5){
        printf("Company decided to give bonus of 5 percent, Congratulations \n");
        printf("Please enter your salary --> ");
        scanf("%d", &salary);
        printf("You are eligible for bonus of Rupees %d", salary/20); // 5/100*salary = salary/20
    }
    
    else{
        printf("aur nokri karo janab, bonus milne mein time hai");
    }

    return 0;
}