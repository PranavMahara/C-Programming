#include<stdio.h>

int main(){
    int i = -3, j = 3 ; 
    
    if ( !i + !j * 1 ){   // !i = 0, !j = 0 so if(0)
        printf ( "\nMassaro" ) ; 
    }
    else{
        printf ( "\nBennarivo" ) ; 
    }

    return 0;
}