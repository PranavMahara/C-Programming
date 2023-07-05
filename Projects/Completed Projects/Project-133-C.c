// Write a C program that accepts one n-digit number and separates the number into its individual digits, 
// and prints the digits separated from one another by two spaces each

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int digits;
    digits = (int)log10(n)+1;

    int k;
    for(int i=1; i<=digits; i++){
        k = n/pow(10, digits-i);
        k = k%10;
        printf("%d   ", k);
    }

    return 0;
}