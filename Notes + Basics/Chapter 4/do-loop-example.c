#include<stdio.h>

int main(){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = 1;

    do{

        printf("The number is %d between 0 and %d \n", i, n+1);
        i++;
    }while(i<=n);


    return 0;
}