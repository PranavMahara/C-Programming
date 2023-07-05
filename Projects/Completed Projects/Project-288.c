//Write a program in C to print first n natural numbers using recursion

#include<stdio.h>

int sm(int x){
    if(x==0){
        return 1;
    }

    else{
        printf("%d ", x);
        return sm(x-1);
    }
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sm(n);

    return 0;
}