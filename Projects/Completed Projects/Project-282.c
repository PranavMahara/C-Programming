// Write a program in C to convert an octal number to a decimal

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the octal number: ");
    scanf("%d", &n);

    int sum = 0;
    int i=0;
    while(n!=0){
        sum = sum + n%10*pow(8, i++);
        n = n/10;
    }

    printf("Decimal Number --> %d", sum);
    return 0;
}