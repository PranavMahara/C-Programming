// Find the length of the string using pointers

#include<stdio.h>

int main(){
    int count;

    char abc[100];
    printf("Enter string --> ");
    gets(abc);

    char *ptr = abc;

    while(*ptr != 0){
        count++;
        ptr++;
    }

    printf("The count is %d", count);
    return 0;
}