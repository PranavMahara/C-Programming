#include<stdio.h>

int main(){
    int abc[] = {1, 2, 3};

    int *a = &abc[0];
    int *bol = &abc[1];
    int *cop = &abc[2];

    printf("The difference betweem pointers is %d \n", cop-a);
    printf("The difference between a and bol is %d \n", a-bol);// adajacent!
    // Pointer arithmetic works like that. It doesn't give you differences between two addresses. 
    // Instead it will show difference between two variables as if they are stored in an array. 
    // so, no matter if your variables (of same type ) are 4 bytes, 8 bytes or 1 byte, 
    // if stored in adjacent memory location their pointer subtraction will always result in 1 or -1.
    return 0;
}