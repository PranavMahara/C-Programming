// Write a program in C to display the first n terms of Fibonacci series.

#include<stdio.h>

int main(){
    int n;
    printf("Enter how many numbers you want --> ");
    scanf("%d", &n);

    int arr[n];

    arr[0] = 0;
    arr[1] = 1;

    if(n==1){
        printf("%d", arr[0]);
    }

    else if(n==2){
        printf("%d %d", arr[0], arr[1]);
    }

    else{
        printf("%d %d ", arr[0], arr[1]);
        for(int i = 0; i<=n;i++){
            printf("%d ", arr[i+2] = arr[i+1] + arr[i]);
       }

    }
    

    
    return 0;
}

