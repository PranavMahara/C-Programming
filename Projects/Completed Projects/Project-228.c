// Write a program in C to count the number of punctuation characters exists in a string using functions
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int chec(char *ptr, int *val){
    *val = 0;
     while(*ptr!='\0'){
         if(*ptr == '!' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '?' || *ptr == '-' || *ptr == ':') {
             *val = *val + 1;  
        }
        ptr++;
    }
}

int main(){
    int count;
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    chec(abc, &count);

    printf("The number of punctutation characters are %d", count);
    return 0;
}