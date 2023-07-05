// Write a C program to read an array of length 6 and find the smallest element and its position. 

#include<stdio.h>

int main(){
    int arr[100];
    int position = 0;
    int n;
    printf("Enter how many elements u gonna put in the array: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }


    for(int i=0; i<n; i++){
        if(arr[i]<arr[0]){
            arr[0] = arr[i];
            position = i+1;
        }
    }

    printf("The smallest element entered is %d \n", arr[0]);
    printf("Position of that element is %d", position);
    return 0;
}