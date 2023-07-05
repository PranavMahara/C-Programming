#include<stdio.h> // Conditional Operatora 

int main(){
    int a;
    printf("Enter a--> ");
    scanf("%d", &a);

    // One Liner code (AVOID) this is shortcut to like 3a.c
    (a<5)?printf("A is less than 5"): printf("A is not less than 5");

    return 0;
}