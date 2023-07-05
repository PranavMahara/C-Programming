#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("helloworld.txt", "a");
    int number = 45;
    fprintf(ptr, "The number is %d \n", number);
    fclose(ptr);
    return 0;
}