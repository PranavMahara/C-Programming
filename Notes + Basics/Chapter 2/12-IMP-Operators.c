#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    a+=10;
    a-=5;
    a*=6;
    a/=2;
    
    printf("The value of a is now %d", a);
    return 0;
}