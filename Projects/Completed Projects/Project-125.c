// Write a C program to read and print the elements of an array of length 7, before print replace every negative number, zero with 100.

#include<stdio.h>

int main(){
    int arr[7];

    for(int i=0; i<7; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<7; i++){
        if(arr[i] == 0 || arr[i]<0){
            printf("100 \n");
        }

        else{
            printf("%d \n", arr[i]);
        }
    }


    return 0;
}