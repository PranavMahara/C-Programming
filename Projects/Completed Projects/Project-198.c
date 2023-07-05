// Copy one array to another using pointer

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of elements u wish to enter in the first array: ");
    scanf("%d", &n);

    int arr_1[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr_1[i]);
    }

    int *ptr = arr_1;

    int arr_2[n];
    int *pt = arr_2;

    for(int i=0; i<n; i++){
        pt[i] = ptr[i];
    }


    for(int i=0; i<n; i++){
        printf("The elements of 2nd array, element %d --> %d \n", i+1, arr_2[i]);
    }

    return 0;
}