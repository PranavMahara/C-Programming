//  Full Pyramid of Numbers
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows --> ");
    scanf("%d", &rows);

    for(int i=0; i<rows; i++){
        for(int j=i; j<rows; j++){
            printf(" ");
        }
        
    }
    return 0;
}