#include<stdio.h>
int sum(int *a, int *b);

int main(){
    int a = 34, b = 10;
    printf("Sum of a and b is %d", sum(&a,&b));
    
   
return 0;
}

int sum(int *a, int *b){
    int temp;
    
    temp = *a+*b;
}