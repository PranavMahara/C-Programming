//  Write a program in C to check whether a character is Hexadecimal Digit or not.

// Hexadecimal Digits are a-f, A-F or 0-9
#include<stdio.h>
#include<ctype.h>

int main(){
    char chr;
    printf("Enter Hexadecimal Digits: ");
    scanf("%c", &chr);

    
    if(isxdigit(chr) || (chr>=65 && chr<=70) || (chr>=97 && chr<=102)){
        printf("It is Hexadecimal");
    }

    else{
        printf("It is not Hexadecimal!");
    }
    return 0;
}