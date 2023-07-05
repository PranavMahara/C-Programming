#include<stdio.h>

int main(){
    int a = 12;
    
    printf("a<<2 is %d \n", a<<2);
    printf("a>>2 is %d \n", a>>2);
    printf("a<<3 is %d \n", a<<3);
    printf("a>>3 is %d \n", a>>3);

    int b = 5;
    int c = 7;
    printf("b & c is %d \n", b & c);
    printf("b | c is %d \n", b | c);
    return 0;
}