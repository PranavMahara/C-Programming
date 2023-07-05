#include<stdio.h>

int main(){
    float a = 3.5 ; 
    switch ( a ){ 
 case 0.5 : 
 printf ( "\nThe art of C" ) ; 
 break ; 
 case 1.5 : 
 printf ( "\nThe spirit of C" ) ; 
 break ; 
 case 2.5 : 
 printf ( "\nSee through C" ) ; 
 break ; 
 case 3.5 :  // inside case int value or char value only
 printf ( "\nSimply c" ) ; 
 } 
    return 0;
}