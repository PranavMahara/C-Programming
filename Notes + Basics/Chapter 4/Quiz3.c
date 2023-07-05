#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n \n");   // 0 pe condition false ho jaegi 
    scanf("%d", &n);
    for(int i=n ; i ; i--){
        printf("The value of i is %d \n", i);
        
    }
    return 0;
}