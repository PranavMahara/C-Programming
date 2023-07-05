#include<stdio.h>
int sum(int a, int b){
    return a+b;
}

int main(){
    int c;                                   
    c = sum(2,5);                            
    printf("The value of c is %d", c);       
    return 0;
}