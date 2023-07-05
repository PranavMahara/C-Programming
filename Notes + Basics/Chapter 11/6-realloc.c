#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));   // (int *)  malloc gives void pointer so we typecaste it to int with the help of int pointer
    // Working is same as that of an array
    for(int i=0; i<6; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<6; i++){
        printf("the value of element %d is  --> %d\n", i+1, ptr[i]);
    }

    // Reallocate using realloc()

    ptr = realloc(ptr, 10*sizeof(int));

    for(int i=0; i<10; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<10; i++){
        printf("the value of element %d is  --> %d\n", i+1, ptr[i]);
    }

    return 0;
}

// “realloc” or “re-allocation” method in C is used to dynamically change the memory allocation of a previously allocated memory. 
// In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory. 
// re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.
// If space is insufficient, allocation fails and returns a NULL pointer.