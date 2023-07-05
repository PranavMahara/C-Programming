// A #define directive could be used even to replace a condition, as 
// shown below.
#include<stdio.h>
#define AND && 
#define ARANGE  a > 25 AND a < 50  

int main(){ 
    int a = 30 ; 
    if ( ARANGE ){ 
      printf ( "Within range" ) ; 
    }
    else {
      printf ( "Out of range" ) ; 
    }

  return 0;
}