// Minimum sum of absolute difference of given array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int sum;
    int min_i = 0;
    int min_j = 1;
    int min_sum = arr[0] + arr[1];

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            sum = arr[i] + arr[j];
            if(abs(min_sum) > abs(sum)){
                min_sum = sum;
                min_i = i;
                min_j = j;
            }
        }
    }

    printf("Minimum Sum --> %d", arr[min_i]+arr[min_j]);
    return 0;
}