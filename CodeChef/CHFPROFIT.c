#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int CostPrice = x*y;
        int SellingPrice = x*z;

        printf("%d\n", SellingPrice-CostPrice);
    }


    return 0;
}