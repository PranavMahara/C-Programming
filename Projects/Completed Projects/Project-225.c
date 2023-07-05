//  Write a program in C to count the number of punctuation characters exists in a string.

#include<stdio.h>
#include<string.h>

int main(){
    int count = 0;
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    char *ptr = abc;

    while(*ptr!='\0'){
         if(*ptr == '!' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '?' || *ptr == '-' || *ptr == ':') {
             count++;  
        }
        ptr++;
    }

    printf("the count is %d", count);
    return 0;
}