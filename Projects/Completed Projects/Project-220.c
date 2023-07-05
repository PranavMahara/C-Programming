// Write a program in C find the equilibrium index of an array. Go to the editor
// Expected Output:
// The given array is:
// 0 -4 7 -4 -2 6 -3 0
// The equilibrium index found at : 7 5 0

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
        int leftsum = 0, rightsum = 0;
        for(int j=0; j<i; j++){
           leftsum += arr[j];
        }
        for(int j=i+1; j<n; j++){   
            rightsum += arr[j];
        }

        if(leftsum==rightsum){
            printf("%d is equilibrium index \n", i);
        }
    }
    return 0;
}