// Write a program in C to separate the individual characters from a string.

#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int i=0;
    
    printf("Enter the string: ");
    gets(str);
    
    printf("String characters are: ");
    while(str[i]!='\0'){
        printf("%c ",str[i]);
        i++;
    }
    
 return 0;
}