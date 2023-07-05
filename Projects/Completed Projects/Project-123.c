// Write a program in C to separate odd and even integers in separate arrays.

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

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            printf("%d is even \n", arr[i]);
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            printf("%d is odd \n", arr[i]);
        }
    }


    return 0;
}