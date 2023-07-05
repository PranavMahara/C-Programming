// Write a program in C to find the maximum and minimum element in an array

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("The Minimum value is %d \n", min);
    printf("The Maximum value is %d \n", max);

    return 0;
}