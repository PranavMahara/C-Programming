#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));   // (int *)  since malloc returns void pointer so we typecaste it to int with the help of int pointer
    // Working is same as that of an array
    for(int i=0; i<6; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<6; i++){
        printf("the value of element %d is %d --> ", i+1, ptr[i]);
    }
    return 0;
}

// C malloc() method
// The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. 
// It returns a pointer of type void which can be cast into a pointer of any form. 
// It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 