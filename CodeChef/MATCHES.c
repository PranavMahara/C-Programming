#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if((a+b)==c || (a+c)==b || (b+c)==a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}