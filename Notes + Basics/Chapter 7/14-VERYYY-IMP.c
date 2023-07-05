#include<stdio.h>

int main(){
    int arr[5];

    int *ptr = arr;

    for(int i=0; i<5; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", ptr); // ptr+i // ptr with ptr++ //&ptr[0]+i // &ptr[0] with ptr++ 
        ptr++;
    }

    ptr=arr; // or ptr = &arr[0] // Make Sure pointer again points back to first array element!!!

    for(int i=0; i<5; i++, ptr++){
        printf("%d \n", *ptr);// *(ptr+i) // ptr[i] // *ptr with ptr++ // arr[i]
    }

    return 0;
}