// Write a program in C to display the pattern like right angle triangle using an asterisk.

#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i=0; i<rows; i++){
        for(int j=rows-i; j<=rows; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}