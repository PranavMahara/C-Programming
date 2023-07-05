// Write a C program to find and print the square of each one of the even values from 1 to a specified value. Go to the editor

#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    for(int i = 0; i<=a; i+=2){
        printf("The square of %d is %d \n", i, i*i);
    }



    return 0;
}