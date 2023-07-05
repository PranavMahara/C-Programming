// Abundant number or not


// An abundant Number (also known as excessive number) is a number in the number theory 
// which itself is smaller than the sum of all its proper divisors. 
// For example,12 is an abundant Number : divisors 1,2,3,4,6 , sum =16 >12.

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        if(n%i==0){
            printf("%d \n", i);
            sum = sum + i;
        }
    }

    printf("The sum is %d \n", sum);

    if(sum>n){
        printf("%d is Abundant Number \n", n);
    }

    else{
        printf("%d is Not an abundant number \n", n);
    }

    return 0;
}