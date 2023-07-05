#include<stdio.h>
#include<stdlib.h>
// in calloc either it initialize all the elements to zero or else we give values to the elements
int main(){
    int *ptr;
    int n;
    printf("Enter the value of elements --> ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));   // (int *)  malloc gives void pointer so we typecaste it to int with the help of int pointer
    // Working is same as that of an array

    for(int i=0; i<n; i++){
        printf("the value of element %d is --> %d\n", i+1, ptr[i]);
    }
    return 0;
}