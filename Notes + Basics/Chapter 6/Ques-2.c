// Write a program having a variable a Print the address of a.
// Pass this variable to a function and print its address.
// Are these address same? Why?

#include<stdio.h>
void adrs(int a);

int main(){
    int a = 3; 
    
    adrs(a);
    printf("The value of address of main 'a' is %u \n", &a);
    
    return 0;
}

void adrs(int a){
    printf("The address of function 'a' is %u \n", &a);
}

// No the addresses are not same!!
