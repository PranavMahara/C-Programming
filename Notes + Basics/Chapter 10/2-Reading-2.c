#include<stdio.h>

int main(){
    FILE *ptr;
    int number;
    int number2;
    ptr = fopen("num.txt", "r");
    fscanf(ptr, "%d", &number);
    fscanf(ptr, "%d", &number2);
    fclose(ptr);
    printf("Number 1 --> %d \n", number);
    printf("Number 2 --> %d \n", number2);
    return 0;
}