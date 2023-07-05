// Sum of all array elements. – using recursion.

#include <stdio.h>

int findSum(int A[], int N){
    if (N <= 0){
        return 0;
    }
    else{
        return (findSum(A, N - 1) + A[N - 1]);
    }
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("%d", findSum(arr, n));
    return 0;
}