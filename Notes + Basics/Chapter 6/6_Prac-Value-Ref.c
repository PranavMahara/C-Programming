#include<stdio.h>
int division(int a, int b);
int divisi(int *a, int *b);



int main(){
    int a, b;
    a = 14;
    b = 7;

    printf("The division is %d \n", division(a, b));

    printf("The divisi is %d \n", divisi(&a, &b));
    
    return 0;
}

int division(int a, int b){
    int c;
    b = 10, a = 5;
    c=b/a;
}

int divisi(int *a, int *b){
    int c;
    *b = 50, *a = 5;
    c=(*b)/(*a);
}
