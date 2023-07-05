#include<stdio.h>

int main(){
    float i = 4.5;
    float *ptr = &i;
    printf("The value of ptr is %u \n", ptr);
    ptr++;
    printf("The value of ptr is now %u \n", ptr);
    
    return 0;
}