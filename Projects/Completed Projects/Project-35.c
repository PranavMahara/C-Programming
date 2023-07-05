// Write a program that reads two numbers and divide the first number by second number. 
// If the division not possible print "Division not possible".

#include<stdio.h>

int main(){
    float x, y;
    printf("Enter the value of x --> ");
    scanf("%f", &x);

    printf("Enter the value of y --> ");
    scanf("%f", &y);

    if(x>y){
        printf("x divided by y is %.2f", x/y);
    }
    else{
        printf("Divsion not possible");
    }

    return 0;
}