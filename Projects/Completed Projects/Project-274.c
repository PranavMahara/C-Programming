// Write a program in C to count the number of triangles can be fromed from a given array. Go to the editor
// Expected Output :
// The given array is : 6 18 9 7 10
// Number of possible triangles can be formed from the array is: 5

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

    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if((arr[i]+arr[j])>arr[k] && (arr[j]+arr[k])>arr[i] && (arr[i]+arr[k])>arr[j]){
                    count++;
                }
            }
        }
    }

    printf("The number of possible triangles --> %d", count);
    return 0;
}