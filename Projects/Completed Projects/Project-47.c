// If a<b print hello and if b<a print bye

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("Hello");
    }

    else{
        printf("Bye");
    }
    return 0;
}