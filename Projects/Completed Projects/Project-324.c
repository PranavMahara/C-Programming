// Rows --> 4
// *   
//  *  
//   * 
//    *
// *****
//    *
//   *
//  *
// *

#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i=0; i<rows-1; i++){
        for(int j=rows-i; j<rows; j++){
            printf(" ");
        }
        printf("*\n");
    }

    for(int i=0; i<rows; i++){
        printf("*");
    }
    printf("\n");

    for(int i=0; i<rows-1; i++){
        for(int j=i; j<rows-2; j++){
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}