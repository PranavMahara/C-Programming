#include<stdio.h>
int main(){
 union var{
 int a, b;
 };
 union var v;
 v.b=10;
 v.a=5;
 printf("%d", v.b);
 return 0;
}



// struct variable cannot be static and cannot be initialized inside structure declaration