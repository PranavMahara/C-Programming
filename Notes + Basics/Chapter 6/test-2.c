#include<stdio.h>

int main(){
    char abc[100];
    printf("Enter a word: ");
    gets(abc);

    char *ptr = abc;

    printf("The value of 1st char is %c \n", ptr[0]);

    printf("The value of 1st char is now %c", abc[0]);
    return 0;
}