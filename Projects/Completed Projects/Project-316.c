// Write a program in C to create and store information in a text file.

#include<stdio.h>
#include<string.h>

int main(){
    FILE *ptr;
    ptr = fopen("hello.txt", "w"); 
    char abc[100];
    printf("Enter what do you want to put in file --> ");
    gets(abc);

    fprintf(ptr, "%s", abc);
    fclose(ptr);
    return 0;
}