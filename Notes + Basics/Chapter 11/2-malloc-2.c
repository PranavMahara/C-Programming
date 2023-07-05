#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *)malloc(5*sizeof(float));   // (float *)  malloc gives void pointer so we typecaste it to int with the help of int pointer

    for(int i=0; i<6; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%f", &ptr[i]);
    }

    for(int i=0; i<6; i++){
        printf("the value of element %d is %f --> \n", i+1, ptr[i]);
    }
    return 0;
}