#include<stdio.h>

int main(){
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    int vip = 0;
    // vip = 1;
    
    if ((age <=70 && age>=18) || vip ==1){     // vip==1 this condition is now comment and hence false so if left condition is true or right is false then it is true # Boolean expression T or F = T   
        printf("You are above 18 and below 70, you can drive \n"); //  "||" is 'or' so basically if any one condition is true then we get able to drive
     }
     else{
         printf("You cannot drive");
     }

    return 0;
}