#include<stdio.h>

int main(){
    int x = 2;
    int y = 3;

    printf("The value of x*y is %d \n", x*y);
    printf("The value of 3*x+8*y is %d \n", 3*x+8*y);
    printf("The value of 8*y / 3*x is %d \n", 8*y / 3*x);
    // 8*3/3*2 = 24/6 = which is wrong answer, in C output is 6
    // 24/3 * 2
    // = 8*2
    // = 16 is the output given by c,  Rules--- see Copy for it


    return 0;
}