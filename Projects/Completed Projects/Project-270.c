// Write a program in C to count the number of inversion in a given array. Go to the editor
// Expected Output :
// The given array is : 1 9 6 4 5
// The inversions are: (9, 6) (9, 4) (9, 5) (6, 4) (6, 5)
// The number of inversion can be formed from the array is: 5

// two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j] && i<j){
                printf("(%d, %d), ", arr[i], arr[j]);
                count++;
            }
        }
    }

    printf("\nThe number of inversions --> %d", count);
    return 0;
}