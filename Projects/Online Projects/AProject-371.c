//  Write a program in C to find the maximum element in an array which is first increasing and then decreasing. Go to the editor
// Expected Output:
// The given array is:
// 2 7 12 25 4 57 27 44
// The maximum element which is increasing then decreasing is: 57

#include<stdio.h>

int main(){
    
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int k[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++){
        k[i] = arr[i+1]-arr[i];
    }

    int min = k[0];

    for(int i=0; i<n-1; i++){
          if(k[i] < min){    
            min = k[i];
          }
    }

    for(int i=0; i<n-1; i++){
          if(k[i]==min){
              printf("%d", k[i]);
          }
    }

    
    return 0;
}