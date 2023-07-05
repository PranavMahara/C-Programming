#include<stdio.h>

int main(){
    int x = 15 ; 
    //                 <-------------------------- Condition always from right to left                      
    printf ( "\n%d %d %d", x, x = 20, x < 30 ) ;   // Bhut farq hai bidu
                                                   // x = 20 yaha pe assignment operator hai and the value of x will turn to 20
    printf ( "\n%d %d %d", x, x == 20, x < 30 ) ;  // here x == 20 will be checked here == is equality operator 
    return 0;
}