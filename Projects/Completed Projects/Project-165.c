// Check if Deficient Number or Not
// Deficient Number if sum of all the divisors of the number denoted by divisorsSum(n) is less than twice the value of the number n. 
// And the difference between these two values is called the deficiency.

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }

    if(sum<(2*n)){
        printf("%d is deficient", n);
    }
    else{
        printf("%d is not deficient", n);
    }

    return 0;
}