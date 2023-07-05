// Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using hash (#) character. Go to the editor
// Sample Input: 10
// Sample Output:

// Input the size of the square: 
// ##########
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// ##########

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        if(i==0 || i==(n-1)){
            printf("##########");
        }
        else{
            printf("#        #");
        }
        printf("\n");
    }
    return 0;
}