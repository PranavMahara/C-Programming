// Write a program in C to swap two numbers using function

#include<stdio.h>
void change(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    printf("Enter the value of 'a' and 'b' --> ");
    scanf("%d %d", &a, &b);

    printf("The value of 'a' and 'b' before changing functions are %d and %d respectively\n", a, b);
    change(&a, &b);
    printf("The value of 'a' and 'b' after are %d and %d respectively", a, b);

    return 0;
}