#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        int count = 0;
        while(n!=0){
            int k = n%10;
            if(k==4){
                count++;
            }
            n = n/10;
        }

        printf("%d\n", count);
    }
    
    return 0;
}