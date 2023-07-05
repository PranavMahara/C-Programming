// Static Variables in C
// Static variables have a property of preserving their value even after they are out of their scope!

#include<stdio.h>

int fun(){
  static int count = 0;
  count++;
  return count;
}
  
int main(){
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}