#include<stdio.h>

int main(){
    int a = 30;
    a = 70;
    printf("a is %d", a);

    const int b = 45;
    // b = 55; // Error constant ki value change nahi kar sakte aap
    return 0;
}