//  Write a program in C to find 2 array elements whose sum is equal to given number. Go to the editor
// Expected Output:
// The given array is:
// 3 7 1 9 15 14 6 2 5 7
// sum = 8
// The elements are:
//The sum we get is with element 3 and 5 
// The sum we get is with element 7 and 1
// The sum we get is with element 1 and 7
// The sum we get is with element 6 and 2

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter a number: ");
    scanf("%d", &k);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j]) == k){
                printf("The sum we get is with element %d and %d \n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}