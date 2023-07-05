#include<stdio.h>
int print_ar(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d \n", i+1, ptr[i]);
    }
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    
    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }
    print_ar(arr, n);
    return 0;
}