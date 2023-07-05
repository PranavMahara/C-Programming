// Write a program to find the greatest of the three numbers 
// entered through the keyboard using conditional operators.


#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter 3 numbers --> ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf("a (%d) is greatest", a);
        }
        else{
            printf("c (%d) is greatest", c);
        }
    }

    else{
        if(b>c){
            printf("b (%d) is greatest", b);
        }
        else{
            printf("c (%d) is greatest", c);
        }
    }
    return 0;
}