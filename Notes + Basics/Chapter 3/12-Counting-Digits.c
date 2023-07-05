#include<stdio.h>

int main(){
    int n, count=0;
    printf("Enter Integer: ");
    scanf("%d", &n);

    while(n!=0){
        n/=10;
        
        count++;    
    }

    printf("Count is %d", count);
    return 0; 
}