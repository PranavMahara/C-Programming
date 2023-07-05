// // Write a program in C to find the missing number from a given array. There are no duplicates in list. Go to the editor
// Expected Output :
// The given array is : 1 3 4 2 5 6 9 8
// The missing number is : 7

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter total numbers (including missing number) --> ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<(n-1); i++){
        printf("Element %d --> ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<(n-1); i++){
        sum = sum + arr[i];
    }

    int x;
    arr[n] = x;

    int total = ((n)*(n+1))/2;

    printf("The missing element is %d", x = total - sum);
    
    return 0;
}