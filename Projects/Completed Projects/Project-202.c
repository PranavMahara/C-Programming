//  Search an element for its position in an array using pointers.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements --> ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter the value of element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }
    
    
    int *ptr = arr;
    int element;
    printf("Enter the element jiski aap position nikalna chahte ho: ");
    scanf("%d", &element);


    for(int i=0; i<n; i++){
        if(ptr[i]==element){
            printf("The value of element %d is %d \n", i+1, ptr[i]);
        }
    }

    return 0;
}