// Convert All Input String Simultaneously Into Asterisk ( * )

#include<stdio.h>

int main(){
    char abc[100];
    printf("Enter the string --> ");
    gets(abc);

    char *ptr = abc;

    while(*ptr!='\0'){
        printf("*");
        ptr++;
    }

    return 0;
}