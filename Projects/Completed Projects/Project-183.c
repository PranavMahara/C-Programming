// Write a C program that reads an array of integers (length 8), replace the 1st element by the 8th, 2nd by the 7th and so on. Print the final array. Go to the editor
// Sample Output:

// Input 8 array elements:
// 25
// 35
// 17
// -5
// 29
// 45
// 60
// 65

// Modified array:
// array_nums[0] = 65
// array_nums[1] = 60
// array_nums[2] = 45
// array_nums[3] = 29
// array_nums[4] = -5
// array_nums[5] = 17
// array_nums[6] = 35
// array_nums[7] = 25

#include<stdio.h>

int main(){
    int arr[8];

    for(int i=0; i<8; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int temp;

    for(int i=0; i<(8/2); i++){
        temp = arr[i];
        arr[i] = arr[8-i-1];
        arr[8-i-1] = temp;
    }

    for(int i=0; i<8; i++){
        printf("The Reversed Elements are, Element %d --> %d \n", i+1, arr[i]);
    }



    
        
    return 0;
}