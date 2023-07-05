// Truncation
#include<stdio.h>

int main(){
    char a;
    int value = 585;

    a = value;
    printf("%c, %d", a, a);

    // Truncation --> Defination

    // Here what is happening is number = 256*n + value 
    // 585 = 256*2 + 73
    // so 73 is ASCII value of I

    return 0;
}