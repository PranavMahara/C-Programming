// Write a program in C to print all the alphabets using a pointer.

#include<stdio.h>

int main(){
    
    char abc[26];
    char *ptr = abc;

    for(int i=0; i<26; i++, ptr++){
        printf("%c ", *ptr = i + 65);
    }

    return 0;
}