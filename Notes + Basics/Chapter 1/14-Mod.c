#include<stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: "); // Negative to Positive
    scanf("%d", &n);

    printf("The value of n is %d", abs(n));
    return 0;
}