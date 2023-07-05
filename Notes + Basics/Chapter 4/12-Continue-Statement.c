//The continue Statement in C
// The contine statement is used to immideately move to the next iteration of the loop.

#include<stdio.h>

int main(){
    int skip = 5, i=0;
    while(i<10){
        i++;
        // printf("Hello World \n");
        if(i!=skip){
            continue; // jese continue statement satisfy hoga then continue ke neeche wala code execute nahi hoga and 
                      // again next value se shuru hojaega
        }
        else{
            printf("Value --> %d \n", i);
        }

        printf("Hello");
    }
    
    return 0;
}
// Continue statement skips the particular iteration of the loop