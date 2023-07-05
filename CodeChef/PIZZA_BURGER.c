#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int money, pizza, burger;
        scanf("%d %d %d", &money, &pizza, &burger);

        if(money>=pizza){
            printf("PIZZA\n");
        }
        else if(money>=burger){
            printf("BURGER\n");
        }
        else{
            printf("NOTHING\n");
        }
    }
    return 0;
}