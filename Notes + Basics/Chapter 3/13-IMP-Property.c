#include<stdio.h>

int main(){
    int x = 100;
    printf("%d \n", 10 + ++x); // it is ++x so 101 is added
    printf("%d \n", 10 + x++); // it is x++ so it will increase 1 but increased 1 will not be reflected!

    printf("%d \n", x);

    return 0;
}