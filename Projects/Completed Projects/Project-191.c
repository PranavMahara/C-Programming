// Write a program in C to find the second largest element in an array.

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

        for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                if (arr[i] > arr[j]){
 
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

    printf("2nd largest element is %d", arr[n-2]);
    return 0;
}