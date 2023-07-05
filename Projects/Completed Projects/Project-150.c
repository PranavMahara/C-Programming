// if a>b print b

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("%d", b);
    }

    else{
        printf("%d", a);
    }
    
    return 0;
}