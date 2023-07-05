#include<stdio.h>

int main(){
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    int vip = 0;
    vip = 1;
    
    if ((age <=70 && age>=18) || vip ==1){     // vip==1 this condition is true for every input whether -ve or +ve because vip = 1 see line 8 so 1 is equivalent to 1 always so it is true for all conditions. vip = 1 nah bhi likh ke vip = 0 bhi direct kar sakte hai bas vip==0 kardo 
        printf("You are above 18 and below 70, you can drive \n"); //  "||" is 'or' so basically if any one condition is true then we get able to drive
     }
     else{
         printf("You cannot drive");
     }

    return 0;
}