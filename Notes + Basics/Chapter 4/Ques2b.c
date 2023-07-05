#include<stdio.h> // Multiplication Table of a number with User Inputs

int main(){
    int a, n;
    printf("Enter the value(a) jiska aap table nikalna cahte hai: ");
    scanf("%d", &a);

    for(int i=a; i<=a;i--){
        printf("%d*%d = %d \n", a, i, a*i);
        if(i==0){
            break;
        }
    }

    return 0;
}