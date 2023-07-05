//  Write a program in C to rearrange positive and negative numbers alternatively in a given array.Go to the editor

#include<stdio.h>

int main(){
    int temp;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

     for (int i=0; i<n; i++){
            for (int j=i + 1; j<n; j++){
                if (arr[i] > arr[j]){
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if(n%2!=0){
        for(int i=0; i<(n+1)/2; i++){
            printf("%d ", arr[n-i-1]);
            printf("%d ", arr[i]);
        }
        printf("%d ", arr[(n+1)/2]);
    }

    if(n%2==0){
        for(int i=0; i<n/2; i++){
            printf("%d ", arr[n-i-1]);
            printf("%d ", arr[i]);
        }
    }
    return 0;
}