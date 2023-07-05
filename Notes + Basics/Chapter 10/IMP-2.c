#include<stdio.h>

int main(){
    FILE *ptr;
    int number = 45;
    ptr = fopen("generated.txt", "w");
    fprintf(ptr, "The number is %d \n", number);
    fprintf(ptr, "THANKS", number);
    fclose(ptr);
    return 0;
}