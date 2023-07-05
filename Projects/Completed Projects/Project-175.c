// Write a program in C to print the first 20 numbers of the Pell series

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number jaha tak aap pell series nikalna chahte ho: ");
    scanf("%d", &n);

    int arr[n];
    
    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<n; i++){
       arr[i] = 2*arr[i-1] + arr[i-2];
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}