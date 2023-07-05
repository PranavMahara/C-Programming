// Write a C program to read a set of integer numbers from the user in an array. 
// The address of this array to your function. 
// This function will print the reverse order of the integer numbers.

#include<stdio.h>
void array(int ptr[], int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("The array before reversing is: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("--------------------------------------- \n");
    array(&arr[0], n);  // or arr instead of &arr[0]

    printf("The array after reversing is: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}