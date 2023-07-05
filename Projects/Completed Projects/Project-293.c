// Non repeating and repeating elements in array

#include <stdio.h>

int main(){

int arr[100], freq[100];
int size, i, j, count;

printf("Enter size of array: ");
scanf("%d", &size);

for(i=0; i<size; i++){
    printf("Enter element %d --> ", i+1);
    scanf("%d", &arr[i]);
// Initially initialize frequencies to -1 
freq[i] = -1;
}

for(i=0; i<size; i++){
count = 1;
        for(j=i+1; j<size; j++){
        // If duplicate element is found
        if(arr[i]==arr[j]){
        count++;
        // Make sure not to count frequency of same element again 
        freq[j] = 0;
        }

    }

// If frequency of current element is not counted 
        if(freq[i] != 0){

        freq[i] = count;

        }

}

// Print frequency of each element 


for(i=0; i<size; i++){

    if(freq[i] == 0){
        printf("Repeating elements --> %d \n", arr[i]);
        }
    }
}