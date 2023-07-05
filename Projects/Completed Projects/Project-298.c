// // Write a C program to find the last non-zero digit of the factorial of a given positive integer. Go to the editor
// For example for 5!, the output will be "2" because 5! = 120, and 2 is the last nonzero digit of 120

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number --> ");
    scanf("%d", &n);

    while(n!=0){
        int k = n%10;
        if(k!=0){
            printf("%d", k);
            break;
        }
        n=n/10;
    }
    
    return 0;
}