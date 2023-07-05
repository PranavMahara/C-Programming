#include<stdio.h>
#define ISDIGIT(y) ( y >= 48 && y <= 57 )
int main(){
    char ch ; 
    printf ( "Enter any digit " ) ; 
    scanf ( "%c", &ch ) ; 
    if ( ISDIGIT ( ch ) ) 
    printf ( "\nYou entered a digit" ) ; 
    else 
    printf ( "\nIllegal input" ) ;
    return 0;
}

// Macros can be split into multiple lines, with a ‘\’ (back slash) 
// present at the end of each line. Following program shows how 
// we can define and use multiple line macros. 

// #define HLINE for ( i = 0 ; i < 79 ; i++ ) \ 
//                    printf ( "%c", 196 ) ; 
// #define VLINE( X, Y ) {\ 
//              gotoxy ( X, Y ) ; \ 
//              printf ( "%c", 179 ) ; \ 
//  } 
// main( ) 
// { 
//  int i, y ; 
//  clrscr( ) ; 
//  gotoxy ( 1, 12 ) ; 
//  HLINE 
//  for ( y = 1 ; y < 25 ; y++ ) 
//  VLINE ( 39, y ) ; 
// }