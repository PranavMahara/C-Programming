// Write a C program to check whether a character is an alphabet or special character.

#include<stdio.h>

int main(){
    char c;
    printf("Enter: ");
    scanf("%c", &c);

    if((c>=32 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=127)){
        printf("It is special Character");
    }

    else if((c>=65 && c<=90) || (c>=97 && c<=122)){
        printf("It is an alphabet");
    }

    
    return 0;
}