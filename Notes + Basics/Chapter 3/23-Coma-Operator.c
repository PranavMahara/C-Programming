// Coma Operator

#include<stdio.h>

int main(){
    int a, x, y;
    a = (x=10, y=20, x+y);

    printf("%d %d %d", a, x, y);

    return 0;
}