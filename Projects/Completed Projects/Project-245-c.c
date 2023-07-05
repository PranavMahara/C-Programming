// Write a C program to print the following characters in a reverse way through pointers and functions
// cute

#include<stdio.h>
#include<string.h>

void rev(char *ptr, int len){
    for(int i = (len-1); i>=0; i--){
        printf("%c", ptr[i]); 
    }
}

int main(){
    char inp[4];
    printf("Enter word --> ");
    gets(inp);

    int a = strlen(inp);

    rev(inp, a);
    return 0;
}