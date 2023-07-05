// Equality of matrix
#include<stdio.h>

int main(){
    int a[100][100], b[100][100];
    int rows, column;
    printf("Enter the number of rows and coloumn: ");
    scanf("%d %d", &rows, &column);

    printf("1st Matrix \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            printf("Enter the Row %d, Coloum %d --> ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("2nd Matrix \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            printf("Enter the Row %d, Coloum %d --> ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    if(a[100][100] = b[100][100]){
        printf("The matrices are equal\n");
        for(int i=0; i<rows; i++){
            for(int j=0; j<column; j++){
                printf("%d  ", a[i][j]);
            }
            printf("\n");
        }
    }

    else{
        printf("The matrices are unequal");
    }
    return 0;
}