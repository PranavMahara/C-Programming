//  Concatenate two strings using pointers.

#include<stdio.h>

int main(){
    char abc[100];
    char bcd[100];

    printf("Enter the first string: ");
    gets(abc);

    printf("Enter the second string: ");
    gets(bcd);

    char *ptr = abc;
    char *str = bcd;

    while(*ptr!='\0'){
        ptr++;
    }
    while(*str!='\0'){
        *ptr = *str;
        str++;
        ptr++;
    }
    *ptr = '\0'; 

    printf("The string is %s", abc); 
    

    return 0;
}