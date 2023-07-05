// Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character. Go to the editor
// Sample Input: 10
// Sample Output:

// Input the size of the square: 
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #
//  # # # # # # # # # #

#include<stdio.h>

int main(){
    int size;
    printf("Enter the side length of the square: ");
    scanf("%d", &size);

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}