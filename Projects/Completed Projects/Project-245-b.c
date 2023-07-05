// Write a C program to print the following characters in a reverse way through pointers.
// cute

#include<stdio.h>
#include<string.h>

int main(){
    char abc[4];
    printf("Enter the word: ");
    gets(abc);

    int a = strlen(abc);
    char *ptr = abc;

    for(int i = (a-1); i>=0; i--){
        printf("%c", ptr[i]); 
    }

    return 0;
}
    // char *ptr = &abc[3];

    // for(int i = (a-1); i>=0; i--, ptr--){
    //     printf("%c", *ptr); 
    // }

    // OR

    // for(int i = (a-1); i>=0; i--){
    //     printf("%c", ptr[i]); 
    // }

    // OR

    // for(int i = (a-1); i>=0; i--){
    //     printf("%c", *(ptr + i)); 
    // }