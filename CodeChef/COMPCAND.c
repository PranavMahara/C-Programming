#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n, k;
        scanf("%d %d", &n, &k);

        if((n%k)==0){
            printf("%d \n", n);
        }
        else{
            printf("-1 \n");
        }
    }

    return 0;
}