// Write a program in C which is a Menu-Driven Program to perform a simple calculation.

#include<stdio.h>

int main(){
    int a, b, opt;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Input Option: ");
    scanf("%d", &opt);

    switch(opt) {
        case 1:
        printf("The Addition of  %d and %d is: %d\n",a,b,a+b);
        break;
        
        case 2:
        printf("The Subtraction of %d  and %d is: %d\n",a,b,a-b);
        break;
        
        case 3:
        printf("The Multiplication of %d  and %d is: %d\n",a,b,a*b);
        break;  
      
        case 4:
        if(b==0) {
          printf("The second integer is zero. Divide by zero.\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",a,b,a/b);
        }  
        break;
        
    }

    return 0;
}