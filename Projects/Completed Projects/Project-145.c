// Write a C program to read and print the elements of an array of length 7, before print, 
// put the triple of the previous position starting from the second position of the array.

#include<stdio.h>

int main(){
    int arr[7];

    printf("Enter element 1 --> ");
    scanf("%d", &arr[0]);

    for(int i=1; i<7; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Element 1 --> %d \n", arr[0]);

    for(int i=1; i<7; i++){
        printf("Element %d --> %d \n", i+1, 3*arr[i]);
    }
    return 0;
}