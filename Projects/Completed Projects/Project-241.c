// Add two matrices
#include <stdio.h>
int main() {
  int rows, column;
  int a[100][100], b[100][100], sum[100][100];

    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &column);

    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < column; j++) {
            printf("Enter element a %d %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
    }

    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < column; j++) {
            printf("Enter element b %d %d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < column; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }
    
  // printing the result
  printf("\nSum of two matrices: \n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < column; j++) {
      printf("%d   ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
