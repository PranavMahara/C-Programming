#include<stdio.h>

int main(){
    // Addition of number to pointer

    int i = 34;
    int *j = &i;
    int **k = &j;

    printf("The address of j is %u \n", j);
    j++; 
    printf("The value of j is %u \n", j);

    // Subtraction of number to pointer

    j--;
    printf("The value of j is %u \n", j);

    // Subtraction of one pointer from another

    printf("The address of j is %u \n", j);
    printf("The address of k is %u \n", k);

    printf("Difference between pointers is %d", *k-*j);
    

    return 0;
}