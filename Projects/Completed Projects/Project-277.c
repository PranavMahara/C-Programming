#include<stdio.h>

int main(){
    int product[100][100], a[100][100];
    int rows, column;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the Number of Rows and Column: ");
    scanf("%d %d", &rows, &column);

    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            printf("Enter the element for Row %d and column %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    
        
    // Scaler Multiplication
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            product[i][j] = a[i][j]*n;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            printf("%d  ", product[i][j]);
            if(j == column - 1){
                printf("\n\n");
        }
        }
    }
    return 0;
}