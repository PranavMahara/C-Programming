// Write a C program to print 3 numbers in a line, starting from 1 and print n lines. 
// Accept number of lines (n, integer) from the user.
// Expected Output:
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 13 14 15

#include<stdio.h>

int main(){
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i+=3){
        printf("%d   %d    %d \n", i, i+1, i+2);

    }
    return 0;
}