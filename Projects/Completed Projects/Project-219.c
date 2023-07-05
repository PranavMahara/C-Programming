// Write a C program to find the number of trailing zeroes in a given number. Go to the editor
// Example 1:
// Input: 4
// Output: 0

#include<stdio.h>

int main(){
    int n;
    printf("Enter number --> ");
    scanf("%d", &n);

    int p, count = 0;
    while(n!=0){
        p = n%10;
        if(p==0){
            count++;
        }
        n = n/10;
    }

    printf("Number of Trailing Zeroes --> %d", count);
    
    return 0;
}
