#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s);              // Gets is a function which can be used to recieve multi word string
    puts(s);              // Puts the string places the cursor on next line
    printf("Your name is %s", s);

    return 0;
}