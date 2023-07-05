#include<stdio.h>

int main(){
    int a = 3;
    float b = 12.34567;

    printf("%.*f", a, b);  // * allows to use variables for formatting format specifiers themselves. 
    // 'a' print only 3 and decimal in 'b' so we will get decimals upto 3 digits, change the value of 'a' and we will get it
    // 4th digit is 6 so 12.345 gets rounded up to 12.346

    printf("\n");
    int c = 5;
    int d = 9;
    printf("%d", d, c);
    return 0;
}