#include<stdio.h>
#include<stdlib.h>
// in calloc either it initialize all the elements to zero or else we give values to the elements
int main(){
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));   // (int *)  malloc gives void pointer so we typecaste it to int with the help of int pointer
    // Working is same as that of an array
    // for(int i=0; i<6; i++){
    //     printf("Enter the value of element %d --> ", i+1);
    //     scanf("%d", &ptr[i]);
    // }

    for(int i=0; i<6; i++){
        printf("the value of element %d is --> %d\n", i+1, ptr[i]);
    }
    return 0;
}

// “calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
// It initializes each block with a default value ‘0’.
// It has two parameters or arguments as compare to malloc().