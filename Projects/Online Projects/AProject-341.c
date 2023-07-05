// Write a program in C to find minimum element in a sorted and rotated array. Go to the editor
// Expected Output :
// The given array is : 3 4 5 6 7 9 2
// The minimum element in the above array is: 2

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    

    int arr[n];
    

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(min<arr[j]){
                arr[j]=min;
            }
        }
    }

    printf("Min element is %d", min);
    return 0;
}