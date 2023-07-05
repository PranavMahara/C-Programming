// Static Variables in C
// Static variables have a property of preserving their value even after they are out of their scope!
// See 22b-Static.c
#include<stdio.h>

int fun(){
  int count = 0;
  count++;
  return count;
}
  
int main(){
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}