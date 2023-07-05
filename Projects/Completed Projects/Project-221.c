// Write a program in C to search an element in a row wise and column wise sorted matrix. Go to the editor
// Expected Output :
// The given array in matrix form is :
// 15 23 31 39
// 18 26 36 43
// 25 28 37 48
// 30 34 39 50
// The given value for searching is: 37
// The element Found at the position in the matrix is: 3, 3

#include<stdio.h>

int main(){
    int rows, coloumns;
    printf("Enter the number of rows and coloumns --> ");
    scanf("%d %d", &rows, &coloumns);

    int arr[rows][coloumns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<coloumns; j++){
            printf("Enter element %dx%d --> ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    int find;

    printf("Enter element whose co-ordinates you want to find -->  ");
    scanf("%d", &find);

    for(int i=0; i<rows; i++){
        for(int j=0; j<coloumns; j++){
            if(arr[i][j] == find){
                printf("The co-ordinates are %dx%d", i+1, j+1);
            }
        }
    }
        



    return 0;
}