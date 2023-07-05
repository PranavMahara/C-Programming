// Write a C program that accepts n real numbers from the keyboard and
// print out the difference of the maximum and minimum values of these four numbers.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    
    printf("The max is %d \n", max);
    printf("The min is %d", min);
    return 0;
}