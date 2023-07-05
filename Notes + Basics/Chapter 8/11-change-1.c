#include<stdio.h>

void change(char *ptr){   // or char ptr[]
    ptr[2] = 'k';
}

int main(){
    char c[] = "Arjun";
    printf("Before --> %c \n", c[2]);
    change(c);
    printf("After --> %c \n", c[2]);



    return 0;
}