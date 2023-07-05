// Like if u want to print float till 2nd decimal

#include<stdio.h>

int main(){
    
    float a;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    
    printf("a is %.2f", a); // CHeck if we can use for int as well, // %.2 prints till 2nd decimal

   
    return 0;
}