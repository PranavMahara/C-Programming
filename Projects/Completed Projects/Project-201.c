// Swap arrays using pointers

#include<stdio.h>

int main(){
    int n, temp;
    printf("Enter the value of elements u wish to enter in the following array: ");
    scanf("%d", &n);

    int arr_1[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d(1st array) --> ", i+1);
        scanf("%d", &arr_1[i]);
    }

    int *ptr = arr_1;

    int arr_2[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d(2nd array) --> ", i+1);
        scanf("%d", &arr_2[i]);
    }

    int *pt = arr_2;
    for(int i=0; i<n; i++){
            temp = ptr[i];
            ptr[i] = pt[i];
            pt[i] = temp;
    }

    for(int i=0; i<n; i++){
        printf("element %d(1st array) --> %d \n", i+1, ptr[i]);
    }

    printf("-------------------------------------------------------- \n");

    for(int i=0; i<n; i++){
        printf("element %d(2nd array) --> %d \n", i+1, pt[i]);
    }

    return 0;
}