// Write a program to enter the values of two variables 'a' and 'b' from keyboard 
// then check if both the conditions 'a < 50' and 'a < b' are true.

#include<stdio.h>

int main(){
    
    int a;
    printf("Please enter the value of a --> ");
    scanf("%d", &a);

    int b;
    printf("Please enter the value of b --> ");
    scanf("%d", &b);

    if(a<50 && a<b){
        printf("The condition is satisfied..Thank you");
    }

    return 0;
}