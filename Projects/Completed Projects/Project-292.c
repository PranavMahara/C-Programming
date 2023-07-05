// Display all elements single time that is if any element is repeated show it single time

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        freq[i] = 1;
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                freq[i]++;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(freq[i]==1){
            printf("%d \n", arr[i]);
        }
    }

    return 0;
}
