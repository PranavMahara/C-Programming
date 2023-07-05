// matrix               =>    Points to base address of two-dimensional array.
//                            Since array decays to pointer.

// *(matrix)            =>    Points to first row of two-dimensional array.
// *(matrix + 0)        =>    Points to first row of two-dimensional array.
// *(matrix + 1)        =>    Points to second row of two-dimensional array.

// **matrix             =>    Points to matrix[0][0]
// *(*(matrix + 0))     =>    Points to matrix[0][0]
// *(*(matrix + 0) + 0) =>    Points to matrix[0][0]
// *(*matrix + 1)       =>    Points to matrix[0][1]
// *(*(matrix + 0) + 1) =>    Points to matrix[0][1]
// *(*(matrix + 2) + 2) =>    Points to matrix[2][2]

#include<stdio.h>

int main(){
    int arr[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int *ptr = &arr[0][0];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d \n", **arr);
            *(*arr+i);
        }
    }
    return 0;
}