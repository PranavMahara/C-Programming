// Write a program in C to segregate 0s and 1s in an array. 
// The given array is:
// 1 0 1 0 0 1 0 1 1
// The array after segregation is: 0 0 0 0 1 1 1 1 1


#include<stdio.h>

int main(){
    int n;
    printf("How many 0s and 1s u will enter: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            printf("0, ");
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            printf("1, ");
        }
    }
    
    return 0;
}