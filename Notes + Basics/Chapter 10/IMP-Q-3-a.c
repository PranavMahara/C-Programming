// Write a sentence to the output file
#include<stdio.h>

int main(){
    char abc[100];
    FILE *ptr;
    ptr = fopen("hollloa.txt", "w");

    printf("Enter the content to the file --> ");
    fgets(abc, 100, stdin);

    fputs(abc, ptr);
    printf("Success!\n");
    return 0;
}