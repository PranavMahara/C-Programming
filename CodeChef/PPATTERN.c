#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        int k=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%d ", k);
                k++;
            }
            printf("\n");
        }
    }
    return 0;
}