//  Write a program in C to sort an array using Pointer.

#include<stdio.h>

int main(){
    int temp, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }   

    int *ptr = arr;

    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(ptr[j]<ptr[i]){
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("Elements in Ascending order, element %d --> %d \n", i+1, arr[i]);
    }
    return 0;
}