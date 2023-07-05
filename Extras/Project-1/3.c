// Write a program to calculate the tax of n given number of employees. Use a separate
// function to calculate the tax. Tax is 20% of basic if basic is less than 9000 otherwise tax is 25%
// of basic.

#include<stdio.h>
void tax(){
    int inc;
    printf("Enter income of the employee: ");
    scanf("%d", &inc);

    if(inc<9000){
        printf("The tax is %.2f \n", 0.2*inc);
    }

    if(inc>=9000){
        printf("The tax is %.2f \n", 0.25*inc);
    }
}

int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        tax();
    }

    return 0;
}