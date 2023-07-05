// Write a C program to perform matrix operations (Addition, subtraction, Multiplication) 
// using functions.

#include<stdio.h>

void sump(int **ptra, int **ptrb,int **sum, int r, int c){
    int **sum[100][100] = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            sum[i][j] = ptra[i][j] + ptrb[i][j];
        }
  }
}

int main(){
    int a[100][100], b[100][100], sum[100][100];
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    int coloum;
    printf("Enter the number of coloum: ");
    scanf("%d", &coloum);

    for(int i=0; i<rows; i++){
        for(int j=0; j<coloum; j++){
            printf("Enter the element for matrix a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<coloum; j++){
            printf("Enter the element for matrix b[%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    sump(a, b, sum, rows, coloum);
    for(int i=0; i<rows; i++){
        for(int j=0; j<coloum; j++){
            printf("%d ", sum[i][j]);
        }
    }

    return 0;
}