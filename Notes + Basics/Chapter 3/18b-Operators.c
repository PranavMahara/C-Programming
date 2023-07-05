#include<stdio.h>

int main(){
    // Bitwise Operator

    // We have multiple Bitwise Operator -->
    // <<      Left Shift
    // >>      Right Shift
    // &       Bitwise AND
    // |       Bitwise OR
    // ^       Bitwise XOR 
    // ~       1's Complement

    int a = 4, b = 8;
       
    printf("a & b : %d \n", a & b);
    printf("a | b : %d \n", a | b);
    printf("a << 2 : %d \n", a << 2);
    printf("a >> 2 : %d \n", a >> 2);
    printf("b << 3 : %d \n", b << 3);
    printf("b >> 3 : %d \n", b >> 3);
    printf("a ^ b : %d \n", a ^ b);


    return 0;
}