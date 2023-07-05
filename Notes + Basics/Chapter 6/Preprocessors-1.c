// Macro Expansion

#include<stdio.h>
#define UPPER 25 

int main( ) {

    int i ; 
    for ( i = 1 ; i <= UPPER ; i++ ) 
    printf ( "\n%d", i ) ; 

    return 0;
}

// UPPER in the above programs are often called ‘macro 
// templates’, whereas, 25 is called their corresponding 
// ‘macro expansions’.

// When it sees the #define directive, it goes through the 
// entire program in search of the macro templates; wherever it finds 
// one, it replaces the macro template with the appropriate macro 
// expansion. Only after this procedure has been completed is the 
// program handed over to the compiler.

// #define PI 3.141592
// Firstly, it is inefficient, since the compiler can generate faster and 
// more compact code for constants than it can for variables. 
// Secondly, using a variable for what is really a constant encourages 
// sloppy thinking and makes the program more difficult to 
// understand: if something never changes, it is hard to imagine it as 
// a variable. And thirdly, there is always a danger that the variable 
// may inadvertently get altered somewhere in the program. So it’s 
// no longer a constant that you think it is.