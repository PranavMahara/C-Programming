//  Write a program in C to find the ceiling in a sorted array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int temp;
    int count = 0;

    for(int i=0; i<n; i++){
        printf("Enter the element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

     for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                if (arr[i] > arr[j]) {                
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        
    int k;
    printf("Put the value --> ");
    scanf("%d", &k);


    for(int i=0; i<n; i++){
        if(arr[i] <= k && k <= arr[i+1]){
            printf("floor --> %d \n", arr[i]);
            printf("ceil --> %d \n", arr[i+1]);
        }
    }
    return 0;
}