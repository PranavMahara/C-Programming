// Write a program in C to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on. Go to the editor
// Expected Output:
// The given array is:
// 5 8 1 4 2 9 3 7 6
// The new array is:
// 1 9 2 8 3 7 4 6 5

#include<stdio.h>

int main(){
    int temp;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }
 
    for (int i = 0; i < n; i++){ 
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(n%2!=0){
        for(int i=0; i<n/2; i++){
            printf("%d ", arr[i]);
            printf("%d ", arr[n-i-1]);
        }
        printf("%d ", arr[n/2]);
    }

    else{
        for(int i=0; i<n/2; i++){
            printf("%d ", arr[i]);
            printf("%d ", arr[n-i-1]);
        }
    }
    return 0;
}