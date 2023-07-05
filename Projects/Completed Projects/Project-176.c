// Write a C program that reads two integers p and q, print p number of lines in a sequence of 1 to q in a line.

#include<stdio.h>

int main(){
    int p, q;
    printf("Enter the value of p and q: ");
    scanf("%d %d", &p, &q);
    
    for(int i=0; i<p;i++){
        for(int i=0; i<q;i++){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}