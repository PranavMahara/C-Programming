#include<stdio.h>

int main(){
    FILE *ptr;
    int number;
    int number2;
    ptr = fopen("num2.txt", "r");

    if(ptr==NULL){
        printf("File doesnt exist!! \n");
    }

    else{
        fscanf(ptr, "%d", &number);
        fscanf(ptr, "%d", &number2);
        fclose(ptr);
        printf("Number 1 --> %d \n", number);
        printf("Number 2 --> %d \n", number2);
    }
    return 0;
}