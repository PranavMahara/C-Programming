// Write a program in C to delete an element at desired position from an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter how many elements u gonna enter: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    int z;
    printf("Which element do you want to delete(Enter Position): ");
    scanf("%d", &z);

    
    for(int i=0; i<n; i++){
        if(z==arr[i]){
            printf("");
        }

        else{
        printf("Element %d--> %d \n", i+1, arr[i]);
        }

    }

    
    
    return 0;
}