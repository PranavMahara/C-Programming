// Write a program in C to count all distinct pairs for a specific difference. Go to the editor
// Expected Output:
// The given array is:
// 5 2 3 7 6 4 9 8
// The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
// Number of distinct pairs for difference 5 are: 3

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int count = 0;
    int arr[n];
    int difference;

    for(int i=0; i<n; i++){
        printf("Enter the element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter kya difference chahiye: ");
    scanf("%d", &difference);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((arr[j]-arr[i])==difference ){
                count++;
            }
        }
    }

    printf("The total pairs having difference %d are %d", difference, count);
    return 0;
}