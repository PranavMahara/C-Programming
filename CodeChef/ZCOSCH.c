#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if(a>=1 && a<=50){
        printf("100\n");
    }

    else if(a>50 && a<=100){
        printf("50\n");
    }

    else{
        printf("0\n");
    }
    return 0;
}