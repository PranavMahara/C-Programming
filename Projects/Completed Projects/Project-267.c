// Write a C program to shift given data by two bits to the left. 
// eg: lets take N=22; which is 00010110 in Binary Form.

// Now, if “N is left-shifted by 2” i.e N=N<<2 then N will become N=N*(2^2). Thus, N=22*(2^2)=88 which can be wriiten as 01011000.

#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    a<<=2;
    printf("%d", a);
    return 0;
}