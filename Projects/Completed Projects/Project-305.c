// Arrays are disjoint or not

// C program to check if the given arrays are disjoint

#include<stdio.h>
#include<stdlib.h>

int disjoint_arrays(int arr1[], int arr2[], int n, int m){
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr1[i] == arr2[j])
            return -1;
        }
    }
        return 1;
    }

int main(){
    int m, n;

    printf("Enter the size of array 1 : ");
    scanf("%d", &n);
    printf("Enter the size of array 2 : ");
    scanf("%d", &m);
    int arr1[n];
    int arr2[m];

    printf("Input Array 1 elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Input Array 2 elements : ");
    for(int i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }

    int res = disjoint_arrays(arr1, arr2, n, m);

    if(res == -1){
        printf("The arrays are not disjoint");
    }
    else{
        printf("The arrays are disjoint");
    }
    
    return 0;
}

