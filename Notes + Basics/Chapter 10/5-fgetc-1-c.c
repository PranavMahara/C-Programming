#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("getcdemo.txt", "r");

    printf("1st char --> %c \n", fgetc(ptr));
    printf("2nd char --> %c \n", fgetc(ptr));
    printf("3rd char --> %c", fgetc(ptr));
    fclose(ptr);
    return 0;
}