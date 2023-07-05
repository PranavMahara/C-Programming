//  Search an element in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("The element which you want to find --> ");
    scanf("%d", &k);

    for(int i=0; i<n; i++){
        if((i+1) == k){
            printf("Element is %d", arr[i]);
        }
    }
    return 0;
}