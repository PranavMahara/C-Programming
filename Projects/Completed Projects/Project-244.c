//  Write a program in C to find the product of an array such that product is equal to the product of all the following elements of arr[] except arr[i]
// Expected Output :
// The given array is : 1 2 3 4 5 6
// The product array is: 720 360 120 30 6 1

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
    

    for(int i=0; i<n; i++){
        int pro = 1;
        for(int j=i+1; j<n; j++){
            pro = pro*arr[j];
        }

        printf("%d \n", pro);
    }
    return 0;
}