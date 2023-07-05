// Write a program in C to sort elements of array in Descending order

#include<stdio.h>

int main(){
    int temp;
    int n;
    printf("Enter the number of elements u gonna put in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("Elements in Descending order, element %d --> %d \n", i+1, arr[i]);
    }
    return 0;
}