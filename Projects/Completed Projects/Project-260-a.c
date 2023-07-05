// Write a program in C to print a string in reverse using a pointer.

#include<stdio.h>
#include<string.h>

int main(){
    char temp;
    char name[100];
    printf("Enter a word: ");
    gets(name);

    int a = strlen(name);

    char *ptr = name;


    for(int i=0; i<a/2; i++){
        temp = ptr[i];
        ptr[i] = ptr[a-i-1];
        ptr[a-i-1] = temp;
    }

    
    printf("The string is %s", ptr);
    return 0;
}

