// Write a program in C to return the number of clumps(a series of 2 or more adjacent elements of the same value) in a given array. Go to the editor
// Expected Output:
// The given array is:
// 17 42 42 7 24 24 17 54 17
// The number of clumps in the array is: 2

#include<stdio.h>

int main(){
    int clump = 0;
    int n;
    printf("Enter how many elements u gonna enter: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            clump++;
        }
    }

    printf("The number of clumps is %d", clump);
    return 0;
}