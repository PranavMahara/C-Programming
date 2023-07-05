// Write a program in C to rearrange an array such that even index elements are smaller and odd index elements are greater than their next. Go to the editor
// Expected Output:
// The array given is:
// 6 4 2 1 8 3
// The new array after rearranging:
// 4 6 1 8 2 3

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int temp;
    for (int i = 0; i < n - 1; i++){ 

        if(i % 2 == 0 && arr[i] > arr[i + 1]){ 
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }

        if (i % 2 != 0 && arr[i] < arr[i + 1]){ 
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    } 

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}