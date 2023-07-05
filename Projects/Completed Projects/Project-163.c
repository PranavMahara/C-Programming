// Harshad number or not

// If a number is divisible by the sum of its digits then it will be known as a Harshad Number.
// Some Harshad numbers are 8, 54, 120 etc.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int k = n;
    int remainder;
    int sum = 0;

    while(n!=0){
        remainder = n%10;
        sum  = sum + remainder;
        n = n/10;
    }
    
    if(k%sum==0){ //k isliye liya kyuki loop lagane ke baad n ki value zero hogyi hai
        printf("It is harshad number");
    }

    else{
        printf("It is not... Hahahaha");
    }

    return 0;
}