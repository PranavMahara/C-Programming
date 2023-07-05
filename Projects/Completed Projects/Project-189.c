//  Write a program in C to find the index of peak element in a given array. Go to the editor
// Expected Output:
// The given array is:
// 5 12 13 20 16 19 11 7 25
// The index of first peak element in the array is: 3
// The index of first peak element in the array is: 5

#include<stdio.h>

int main(){
    int n;
    printf("How many elements u gonna put in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0 ; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("------------------------------------- \n");

    for(int i=1; i<(n-1); i++){
        if(arr[i-1]<=arr[i] && arr[i]>=arr[i+1]){
            printf("Index Element --> %d \n", i);
        }
    }
    return 0;
}