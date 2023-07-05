// Write a program in C to find two numbers that occur odd number of times in an array
// Expected Output:
// The given array is: 6 7 3 6 8 7 6 8 3 3
// The two numbers occuring odd number of times are: 3 & 6

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];

    for(int i=0; i<n; i++){
        freq[i] = -1;
        printf("Element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                count++;

                freq[j] = 0;
            }
        }
        if(freq[i]!=0){
            freq[i] = count;
        }
    }

    for(int i=0; i<n; i++){
        if(freq[i]%2!=0){
            printf("Element which occured odd number of times: %d \n", arr[i]);
        }
        
    }

    return 0;
}