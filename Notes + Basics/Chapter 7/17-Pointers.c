#include <stdio.h>

#define ROWS 3
#define COLS 3

void inputMatrix(int matrix[][COLS], int rows, int cols){
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

void printMatrix(int (*matrix)[COLS], int rows, int cols){
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main(){
    int matrix[ROWS][COLS];
    int i, j;

    printf("Enter elements in %dx%d matrix.\n", ROWS, COLS);
    inputMatrix(matrix, ROWS, COLS);

    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);


    return 0;
}

