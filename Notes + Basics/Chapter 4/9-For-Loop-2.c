#include<stdio.h>

int main(){
    int i;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    for(i; i<3; i++){
        printf("The value of i is %d \n", i);
    }
    return 0;
}