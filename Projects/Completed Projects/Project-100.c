// Print 2nd number of n digit number!
#include<stdio.h>

int main(){

    int n, rem;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(n>=10){
        rem = n%10;
        n = n/10;
    }

    printf("The 2nd digit is %d", rem);
    
    return 0;
}