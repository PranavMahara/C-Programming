#include<stdio.h>
// Every statement in a switch must belong to some case or the 
// other. If a statement doesn’t belong to any case the compiler 
// won’t report an error. However, the statement would never get 
// executed. For example, in the following program the printf( )
// never goes to work. 

int main(){
    int i, j ; 
    printf ( "Enter value of i" ) ; 
    scanf ( "%d", &i ) ; 
    switch ( i ) 
    { 
    printf ( "Hello" ) ; 
    case 1 : 
    j = 10 ; 
    break ; 
    case 2 : 
    j = 20 ; 
    break ; 
    } 
    return 0;
}

// Is switch a replacement for if? Yes and no. Yes, because it 
// offers a better way of writing programs as compared to if, and 
// no because in certain situations we are left with no choice but 
// to use if. The disadvantage of switch is that one cannot have a 
// case in a switch which looks like: 
//  case i <= 20 :



// following switch statements are legal. 
//  switch ( i + j * k ) 
//  switch ( 23 + 45 % 4 * k ) 
//  switch ( a < 4 && b > 7 ) 