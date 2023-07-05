// Write a program in C to update every array element with multiplication of previous and next numbers in array. Go to the editor
// Expected Output:
// The given array is:
// 1 2 3 4 5 6
// The new array is:
// 2 3 8 15 24 30

#include<stdio.h>

int main(){
    
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Element 1 --> %d \n", arr[0]*arr[1]);
    for(int i=1; i<(n-1); i++){
        printf("Element %d --> %d \n", i+1, arr[i-1]*arr[i+1]);
    }
    printf("Element %d --> %d", n, arr[n-1]*arr[n-2]);
    return 0;
}