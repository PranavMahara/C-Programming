// Write a sentence to the output file
#include<stdio.h>

int main(){
    char abc[100];
    FILE *ptr;
    ptr = fopen("hollloa---2.txt", "w");

    printf("Enter the content to the file --> ");
    gets(abc);
    fprintf(ptr, "%s", abc);

    printf("Success!\n");
    return 0;
}