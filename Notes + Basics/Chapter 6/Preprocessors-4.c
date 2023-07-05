// A #define directive could be used to replace even an entire C 
// statement. This is shown below. 

#include<stdio.h>
#define FOUND printf ( "The Yankee Doodle Virus" ) ; 

int main(){ 
    char signature ; 
    if ( signature == 'Y' ) 
    FOUND 
    else 
    printf ( "Safe... as yet !" ) ;
    return 0; 
}