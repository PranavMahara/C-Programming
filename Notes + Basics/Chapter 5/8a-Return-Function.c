#include<stdio.h>
int check(int x);

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("The value is %d", check(a));
    
    return 0;
}

int check(int x){
    if(x==1){
        return 2020;
    }

    else if(x==2){
        return 1110;
    }
    
    else{
        return 123;
    }
}