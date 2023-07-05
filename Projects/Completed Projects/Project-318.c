// Display all array elements using recursion.

#include <stdio.h>

void printArray(int arr[], int start, int len);

int main(){
    int arr[100];
    int n, i;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
        
    printf("Elements in the array: ");
    printArray(arr, 0, n);
    
    return 0;
}

void printArray(int arr[], int start, int len){

    if(start >= len){
        return;
    }

    printf("%d, ", arr[start]);
 
    printArray(arr, start + 1, len); 
}