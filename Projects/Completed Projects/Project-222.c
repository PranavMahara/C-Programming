// ascending order with pointers and functions

#include<stdio.h>

void elements(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &ptr[i]);
    }
}

void ascending(int *arr, int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    elements(arr, n);

    printf("Elements in the array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\n");
    ascending(arr, n);

    printf("Elements in ascending order --> ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}