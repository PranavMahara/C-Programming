// Replace all 0's with 1 in given integer

#include<stdio.h>

int main(){
    int n;
    printf("Enter how many numbers u gonna enter: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            printf("1");
        }

        else{
            printf("%d", arr[i]);
        }
    }


    return 0;
}