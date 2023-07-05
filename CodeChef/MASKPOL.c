#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int a, n;
        scanf("%d %d", &n, &a);
        
        if(n/2>=a){
            printf("%d\n", a);
        }
        else{
            printf("%d\n", n-a);
        }
        
    }

    return 0;
}