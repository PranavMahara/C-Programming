#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)malloc(10*sizeof(int));   // (int *)  malloc gives void pointer so we typecaste it to int with the help of int pointer
    // Working is same as that of an array
    for(int i=0; i<10; i++){
        printf("%dx%d --> %d \n", 7, i+1, 7*(i+1));
    }
    printf("After Reallocation \n");
    ptr = realloc(ptr, 15*sizeof(int));

    for(int i=0; i<15; i++){
        printf("%dx%d --> %d \n", 10, i+1, 10*(i+1));
    }

    return 0;
}