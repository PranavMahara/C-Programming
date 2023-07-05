// Minimum scalar product of 2 vectors

// just simply do one array in ascending and other in descending then multiply
// for max scalar product then do both arrays in ascending order then mutliply arr[i] element with other arr_2[i] element

#include<stdio.h>

int main(){
    int temp;
    int tem;
    int n;
    printf("Enter Number of elements in I: ");
    scanf("%d", &n);

    int arr[n];    

    for(int i=0; i<n; i++){
        printf("Element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                if (arr[i] < arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
    }

    int arr_2[n];

    for(int i=0; i<n; i++){
        printf("Element %d --> ", i+1);
        scanf("%d", &arr_2[i]);
    }

    for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                if (arr_2[i] > arr_2[j]){
                    tem = arr_2[i];
                    arr_2[i] = arr_2[j];
                    arr_2[j] = tem;
                }
            }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i]*arr_2[i];
    }

    printf("The Min Scalar Product is %d", sum);
    return 0;
}