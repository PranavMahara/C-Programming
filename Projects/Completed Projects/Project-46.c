// Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines. 
// Accept number of lines (n, integer) from the user.

#include<stdio.h>
#include<math.h>

int main(){
    int i, n;
    i = 1;

    printf("Enter the value of n --> ");
    scanf("%d", &n);
    

    while(i<=n){
        printf("%d, %d, %d \n", i, (int)pow(i, 2), (int)pow(i,3)); // Pow function takes float values
        i++;
    }

    return 0;
}