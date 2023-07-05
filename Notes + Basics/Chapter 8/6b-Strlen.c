#include<stdio.h>

xstrlen ( char *s ); 

int main(){
    char arr[ ] = "Bamboozled" ; 
 int len1, len2 ; 
 len1 = xstrlen ( arr ) ; 
 len2 = xstrlen ( "Humpty Dumpty" ) ; 
 printf ( "\nstring = %s length = %d", arr, len1 ) ; 
 printf ( "\nstring = %s length = %d", "Humpty Dumpty", len2 ) ;
    return 0;
}

xstrlen ( char *s ) 
{ 
 int length = 0 ; 
 while ( *s != '\0' ) 
 { 
 length++ ; 
 s++ ; 
 } 
 return ( length ) ; 
} 

// The function xstrlen( ) is fairly simple. All that it does is keep 
// counting the characters till the end of string is not met. Or in other 
// words keep counting characters till the pointer s doesn’t point to 
// ‘\0’. 