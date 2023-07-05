#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int *ptr2;
    ptr = (int *)malloc(6*sizeof(int));   // (int *)  malloc gives void pointer so we typecaste it to int with the help of int pointer
    // Working is same as that of an array
    
    for(int i=0; i<6; i++){
        ptr2 = (int *)malloc(60000*sizeof(int));
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &ptr[i]);

        free(ptr2); // it clears memory side by side thus making the program efficient!!
    }

    for(int i=0; i<6; i++){
        printf("the value of element %d is %d --> ", i+1, ptr[i]);
    }
    return 0;
}