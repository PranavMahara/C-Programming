// Subtract 2 matrices
#include<stdio.h>

int main(){
    int sum[100][100], a[100][100], b[100][100];
    int rows, column;

    printf("Enter the Number of Rows and Column: ");
    scanf("%d %d", &rows, &column);

    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            printf("Enter the element for matrix a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            printf("Enter the element for matrix b[%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    // DIFFERENCE
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            sum[i][j] = a[i][j] - b[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}