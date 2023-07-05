#include<stdio.h>

int main(){
    int i = 34;
    int*ptr = &i; // ptr mein i ka address

    printf("address of i is %u \n", &i);
    printf("address of ptr is %u \n", &ptr);

    printf("The value of ptr is %u \n", ptr);
    ptr++;
    printf("The value of ptr is now %u \n", ptr);
    ptr++;
    printf("The value of ptr is now now %u \n", ptr);
    ptr--;
    printf("The value of ptr is now %u \n", ptr);
    return 0;
}