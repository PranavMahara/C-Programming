#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    if(a==5){
        goto option;
    }
    
    else{
        goto opn;
    }

    option:
        printf("Hello 5 enter karne key liye shukriya");

    opn:
        printf("5 enter kariye!");

    return 0;
}