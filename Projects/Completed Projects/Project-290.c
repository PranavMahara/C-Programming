// Write a program in C to find the maximum repeating number in a given array. Go to the editor

// Expected Output:
// The given array is:
// 2 3 3 5 3 4 1 7 7 7 7
// The maximum repeating number is: 7

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
        freq[i] = -1 ;
    }

    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                count++;

                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i] = count;
        }
    }

    int max = freq[0];

    for(int i=0; i<n; i++){
        if(freq[i]>max){
            max = arr[i];
        }
    }
    printf("The maximum repeated element is %d", max);
    return 0;
}