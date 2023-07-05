// Convert lowercase string to uppercase.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char abc[100];
    printf("Enter the string --> ");
    gets(abc);
    
    char *ptr = abc;

    while(*ptr!=0){
        printf("%c", tolower(*ptr));
        ptr++;
    }
    
    return 0;
}