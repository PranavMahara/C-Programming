#include<stdio.h>

int main(){
    int i = 1, j = 1 ; 
    for ( ; ; ) 
    { 
    if ( i > 5 ) 
    break ; 
    else 
    j += i ; 
    printf ( "\n%d", j ) ; 
    i += j ; 
    } 
    return 0;
}

// An expression contains relational operators, assignment 
// operators, and arithmetic operators. In the absence of 
// parentheses, they will be evaluated in which of the following 
// order:  arithmetic, relational, assignment