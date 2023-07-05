// Write a C program to print the powers of n table for the power 0 to 10, both positive and negative.

#include<stdio.h>
#include<math.h>

int main(){

    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    
    for(int i=0; i<=10; i++){
        printf("The powers are %d \n", (int)pow(a, i));
    }


return 0;
}