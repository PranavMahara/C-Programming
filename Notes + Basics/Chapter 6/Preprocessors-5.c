// Macros with Arguments 
// The macros that we have used so far are called simple macros. 
// Macros can have arguments, just as functions can. Here is an 
// example that illustrates this fact. 
#include<stdio.h>
#define AREA(x) ( 3.14 * x * x ) 

int main(){ 
    float r1 = 6.25, r2 = 2.5, a ; 
    a = AREA ( r1 ) ; 
    printf ( "\nArea of circle = %f", a ) ; 
    a = AREA ( r2 ) ; 
    printf ( "\nArea of circle = %f", a ) ; 
     
    return 0;
}