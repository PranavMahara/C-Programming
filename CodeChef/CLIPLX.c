#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int x, y;
        scanf("%d %d", &x, &y);


        if(x<y){
            printf("0\n");
        } 

        else{
            x = x-y;
            printf("%d\n", x);
        }
    }
    return 0;
}