// // Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers. Go to the editor
// Input four numbers: 1.54 1.236 1.3625 1.002
// Difference is 0.5380

#include<stdio.h>

int main(){

  float arr[4];

  for(int i=0; i<4; i++){
    printf("Enter the element %d --> ", i+1);
    scanf("%f", &arr[i]);
  }

    float max = arr[0];
    float min = arr[0];
    
  for(int i=0; i<4; i++){
    if(max<arr[i]){
      max = arr[i];
    }
  }

  printf("The max is %.4f \n", max);

  for(int i=0; i<4; i++){
    if(min>arr[i]){
      min = arr[i];
    }
  }

  printf("The min is %.4f \n", min);

  printf("The difference is %.4f", max-min);
  

return 0;
}