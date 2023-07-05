// // Write a C program to print a binomial coefficient table. Go to the editor
// Mx 0 1 2 3 4 5 6 7 8 9 10
// ----------------------------------------------------------
// 0 1
// 1 1 1
// 2 1 2 1
// 3 1 3 3 1
// 4 1 4 6 4 1
// 5 1 5 10 10 5 1
// 6 1 6 15 20 15 6 1
// 7 1 7 21 35 35 21 7 1
// 8 1 8 28 56 70 56 28 8 1
// 9 1 9 36 84 126 126 84 36 9 1
// 10 1 10 45 120 210 252 210 120 45 10 1

#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
      printf("%2d", i);
      int num = 1;
      for (int j = 0; j <= i; j++) {
         if (i != 0 && j != 0)
         num = num * (i - j + 1) / j;
         printf("%4d", num);
      }
      printf("\n");
   }

    return 0;
}