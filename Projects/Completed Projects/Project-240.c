// Write a program in C to print only the string before new line character.

#include<stdio.h>
#include<string.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char *ptr = abc;

    for(int i=0; i<strlen(abc); i++){
        if(ptr[i]!='.'){
            printf("%c", ptr[i]);
        }

        if(ptr[i]=='.'){
            break;
        }

       
    }
    return 0;
}