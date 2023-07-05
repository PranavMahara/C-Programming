// Write a program in C to check whether a number is Disarium or not. 
// A number is said to be the Disarium number when the sum of its digit raised to the power of their respective positions 
// is equal to the number itself. 
// Some of the other examples of Disarium number are 89, 135, 518 etc.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the number --> ");
    scanf("%d", &n);

    int count = (int)log10(n)+1;
    int k = n;

    int sum = 0;
    int i=0;
    while(n!=0){
        sum = sum + pow(n%10, count-(i++));
        n=n/10;
    }

    if(sum==k){
        printf("%d is Disarium", k);
    }
    else{
        printf("%d is not Disarium", k);
    }
    return 0;
}