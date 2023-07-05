// //  Write a C program that reads an array (length 7) and print all array positions that store a value less or equal to 0. Go to the editor
// Sample Output:

// Input 7 array elements:
// 15
// 23
// 37
// 65
// 20
// -7
// 65

// Array positions that store a value less or equal to 0:
// array_nums[5] = -7.0


#include<stdio.h>

int main(){
    int arr[7];
    
    for(int i=0; i<7; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<7; i++){
        if(arr[i]<0){
            printf("The element %d is %d \n", i+1, arr[i]);
        }
    }


    return 0;
}