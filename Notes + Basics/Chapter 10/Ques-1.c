// Write a program to read three integers from a file

#include<stdio.h>

int main(){
    FILE *ptr;

    int num1, num2, num3;
    ptr = fopen("num.txt", "r");

    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    fclose(ptr);

    printf("%d %d %d", num1, num2, num3);
    return 0;
}