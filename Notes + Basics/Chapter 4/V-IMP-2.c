#include<stdio.h>

int main(){
    int x = 0, y = 10;
    if(x & ++y){} // bitwise and
    printf("%d", y);

    // The value of y gets modify as the 
    // bitwise operator & evaluates both
    // expressions
    return 0;
}