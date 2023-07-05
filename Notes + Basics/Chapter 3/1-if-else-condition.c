#include<stdio.h>       // C program to check whether a number is even or odd

int main(){
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);

    if(a%2==0){       // Conditions even tabhi aaega if even put karenge a%2 (% is remainder) means when a is divided by 2 remainder should come 0
        printf("%d is even \n", a);     
    } 
    else{                                 // else block is not necessary sirf if vala bhi likhe toh code run hoga 
        printf("%d is odd \n", a);
    }

    return 0; 
}