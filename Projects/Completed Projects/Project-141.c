// Write a C program that reads an array of integers (length 7), 
// and replace the first element of the array by a give number and 
// replace each subsequent position of the array by the double value of the previous. 

#include<stdio.h>

int main(){
    int arr[7];

    for(int i=0; i<7 ;i++){
        printf("Enter element %d--> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<7 ;i++){
        if(i==0){
            int n;
            printf("Enter a number jisse aap replace karoge first element: ");
            scanf("%d", &n);
            printf("The first element is now %d \n", n);
        }

        else{
            printf("Element %d is 2 times that is %d \n", i+1, 2*arr[i]);
        }
    }


    return 0;
}