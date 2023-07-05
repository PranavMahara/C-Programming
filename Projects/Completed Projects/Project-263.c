// Write a program in C to print next greater elements in a given unsorted array. Elements for which no greater element exist, consider next greater element as -1. Go to the editor
// Expected Output :
// The given array is : 5 3 10 9 6 13
// Next Bigger Elements are:
// Next bigger element of 5 in the array is: 10
// Next bigger element of 3 in the array is: 10
// Next bigger element of 10 in the array is: 13
// Next bigger element of 9 in the array is: 13
// Next bigger element of 6 in the array is: 13
// Next bigger element of 13 in the array is: -1
// Next Bigger Elements Array:
// 10 10 13 13 13 -1

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        int next = -1;
        for (int j = i+1; j<n; j++){
            if (arr[i] < arr[j]){
                next = arr[j];
                break;
            }
        }
        printf("%d ", next);
    }

    return 0;
}