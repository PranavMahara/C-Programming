// Write a program in C to check prime number by making functions

#include<stdio.h>
void prime(int a){
    if((a ==2 || a == 3 || a == 5 || a== 7) || a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a!=1){
            printf("%d is a Prime Number \n", a);
    }
    else{
        printf("%d is not a Prime Number", a);
    }
}


int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}