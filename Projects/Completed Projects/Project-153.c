//  Write a program in C to move all zeroes to the end of a given array.
// Expected Output :
// The given array is : 2 5 7 0 4 0 7 -5 8 0
// The new array is:
// 2 5 7 8 4 -5 7 0 0 0

#include<stdio.h>

int main(){
    int temp;
    int n;
    printf("Enter the number of elements which u gonna enter in array: ");
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for(int i=0; i<n; i++){
        printf("Element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]>0 || arr[i]<0){
            printf("%d ", arr[i]);
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0 == arr[i]<0){
            printf("%d ", arr[i]);
        }
    }

    
    
    return 0;
}