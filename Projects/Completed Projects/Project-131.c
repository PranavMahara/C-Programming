// Write a program in C to check whether a number is a prime number or not using the function.

#include<stdio.h>
void prime(int a);

int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    prime(x);
    
    
    return 0;
}
void prime(int a){
    if((a ==2 || a == 3 || a == 5 || a== 7) || a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a!=1){
            printf("%d is a Prime Number \n", a);
    }

    else{
        printf("%d is not a Prime Numebr", a);
    }
}