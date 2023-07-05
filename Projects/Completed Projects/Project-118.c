// Write a program in C to store n elements in an array and print the elements using pointer. 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;
    for(int i=0; i<n; i++, ptr++){
        printf("Enter the value of element %d: ", i+1);
        scanf("%d", ptr); // ptr or &ptr[0]
        // yaha bhi ptr++ likh sakte hai upar bhi likh sakte hai jese abhi i++ ke sath likha hua hai
    }

    ptr = arr; // reinitialize array

    for(int i=0; i<n; i++){
        printf("The value of element %d is %d \n", i+1, ptr[i]);
    }


    return 0;
}
