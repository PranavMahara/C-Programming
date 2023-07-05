#include<stdio.h>

#define max 100
int main(){
    printf("max is %d", max);

    return 0;
}

// When we use define for a constant, the preprocessor produces a C program where the defined 
// constant is searched and matching tokens are replaced with the given expression. 
// For example in the following program max is defined as 100.