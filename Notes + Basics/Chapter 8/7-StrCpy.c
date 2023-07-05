#include<stdio.h>
#include <string.h>

int main(){
    char *st = "Arjun";
    char st2[45];
    strcpy(st2, st); //st2 now contains st // strcpy is used to copy the content of second string into the first string passed to it
    printf("Now st2 is %s", st2);
    
    return 0;
}

// On supplying the base addresses, strcpy( ) goes on copying the 
// characters in source string into the target string till it doesn't 
// encounter the end of source string (‘\0’). It is our responsibility to 
// see to it that the target string’s dimension is big enough to hold the 
// string being copied into it. Thus, a string gets copied into another, 
// piece-meal, character by character. There is no short cut for this. 
// Let us now attempt to mimic strcpy( ), via our own string copy 
// function, which we will call xstrcpy( ).