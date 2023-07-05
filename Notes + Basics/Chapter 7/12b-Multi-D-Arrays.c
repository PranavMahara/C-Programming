#include<stdio.h>

int main(){
    int row = 5;
    int coloum = 2;

    int chart[2][5];

    for(int i=0; i<coloum; i++){
        for(int j=0; j<row; j++){
            printf("Row %d, Coloumn %d --> ", i+1, j+1);
            scanf("%d", &chart[i][j]);
        }
    }

    for(int i=0; i<coloum; i++){
        for(int j=0; j<row; j++){
            printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, chart[i][j]);
        }  
    }
    return 0;
}