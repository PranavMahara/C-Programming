#include<stdio.h>

int main(){
    char i = 'c';
    char *ptr = &i;
    printf("The value of ptr is %u \n", ptr);
    ptr++;
    printf("The value of ptr is now %u \n", ptr);
    printf("The address of ptris %u", &ptr);
    
    return 0;
}