#include<stdio.h>

int main(){
    int a = 4;
    int b = 8;
    int z;

    z = a * b ; // Legal
    z = b * a ; // Legal
    // a * b = z; // illegal
    // b * a = z; // illegal
    printf("The value of a+b is : %d \n", a+b);
    printf("The value of a-b is : %d \n", a-b);
    printf("The value of a*b is : %d \n", a*b);
    printf("The value of a/b is : %d \n", a/b);

    return 0;
}