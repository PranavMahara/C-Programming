#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);

        for(int i=1; i<=n; i++){
            if(i%2!=0){
                a = a*2;
            }
            else{
                b = b*2;
            }
        }

        if(a==0 || b==0){
            printf("0");
        }

        else if(a>b){
            printf("%d\n", a/b);
        }
        else{
            printf("%d\n", b/a);
        }
    }
    return 0;
}