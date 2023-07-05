//  Delete all adjacent duplicate elements from an array.
// 9 9 1 3 3 6 4 8 6 6 
// New --> 9 1 3 6 4 8 6

#include<stdio.h>

int main(){
    int n;
    printf("Enter how many number of elements you want to put in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("-------------------------------------------- \n");

    int k = arr[0];
    printf("Element 1 --> %d \n", arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i]!=k){
            printf("Element %d --> %d \n", i+1, arr[i]);
            k = arr[i];
        }
       
    }
    return 0;
}