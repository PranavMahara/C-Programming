// Convineant way for printing string

#include<stdio.h>

int main(){
    char *ptr = "ATG";
    char lol[] = "LOLOL"; // Other way
    printf("%s \n", ptr);  // ......LOL %s , s is for strings 
    printf("%s", lol);
    return 0;
}