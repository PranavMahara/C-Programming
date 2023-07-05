// Write a C program that accepts one n-digit number and separates the number into its individual digits, 
// and prints the digits separated from one another by two spaces each

#include<stdio.h>

int main(){
    int count = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int k = n;

    while(n!=0){
        count++;
        n=n/10;
    }
    // printf("%d \n", count);

    int arr[count];
    for(int i=0; i<count; i++){
        int p = k%10;
        arr[i] = p;
        k = k/10;
    }

    for(int i=(count-1); i>=0; i--){
        printf("%d    ", arr[i]);
    }
    return 0;
}