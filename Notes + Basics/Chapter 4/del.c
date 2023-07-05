#include<stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    fflush(stdin);
    scanf("%d", &b);
    
    for(a; a<=b; a++){
        if(a%2!=0){
        printf("%d \n", a);
        }
    }
    
    return 0;
}