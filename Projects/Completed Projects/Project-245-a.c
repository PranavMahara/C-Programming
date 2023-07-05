// Write a C program to print the following characters in a reverse way.
// cute

#include<stdio.h>
#include<string.h>

int main(){
    char abc[4];
    printf("Enter the word: ");
    gets(abc);

    int a = strlen(abc);

    for(int i = (a-1); i>=0; i--){
        printf("%c", abc[i]);
    }

    return 0;
}