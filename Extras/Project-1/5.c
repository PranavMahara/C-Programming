// Write a program to evaluate a^b using function.

#include<stdio.h>
#include<math.h>
int powe(int x, int y){
    int c = (int)pow(x, y);
}

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    int b;
    printf("Raised to power--> ");
    scanf("%d", &b);

    printf("a^b --> %d", powe(a, b));
    return 0;
}