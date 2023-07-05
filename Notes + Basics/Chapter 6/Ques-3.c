// Write a program to change the value of a variable
// ten times of its current value.
// Write a function and pass the value by refernce.

#include<stdio.h>
int value(int *a);

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("The value of %d when it is 10 times is %d", a, value(&a));
   
return 0;
}

int value(int *a){
    return (*a)*10;
}