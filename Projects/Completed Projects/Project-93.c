// Write a C program to print 4 numbers in a line, starting from 1 and print n lines. 
// Accept number of lines (n, integer) from the user.

#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=(n*4); i+=4){     // n*4 because 'n' lines chahiye like 5 lines we want so simply 20 tak ki counti chalegi
         printf("%d %d %d %d \n", i, i+1, i+2, i+3);
    }
    
    return 0;
}