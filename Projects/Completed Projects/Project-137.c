// Suppose you entered a 'n' digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.

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
        printf("%d", k+2);
    }

    return 0;
}