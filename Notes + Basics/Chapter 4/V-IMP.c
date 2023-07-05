#include<stdio.h>

int main(){
    int x = 0, y = 10;
    if(x && ++y){}
    printf("%d", y);

    // The value of y doesn't modify as the 
    // logical operator && doesnt evaluate 2nd
    // expression if first is false
    return 0;
}