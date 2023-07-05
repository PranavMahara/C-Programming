// Write a program in C to convert a binary number into a decimal number using math function

#include<stdio.h>
#include<math.h>

int main(){
    int rem, dec = 0, i = 0;
    int n;
    printf("Enter the binary number: ");
    scanf("%d", &n);

    while(n!=0){
        rem = n%10;
        n/=10;
        dec = dec + rem*pow(2, i);
        i++;
    }

    printf("Decimal mein ans --> %d", dec);
    return 0;
}