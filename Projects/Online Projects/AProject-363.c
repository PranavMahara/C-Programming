// Write a program in C to rearrange an array such that arr[i]=i. Go to the editor

// N.B.: Given array contains N elements, from 0 to N – 1. All elements within the range may not be present in the array. There will be -1 if an element within the range is not present in the array.

// Expected Output:
// The given array is:
// 2 5 -1 6 -1 8 7 -1 9 1
// The new array is: -1 1 2 -1 -1 5 6 7 8 9

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter Element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        
    }
    return 0;
}