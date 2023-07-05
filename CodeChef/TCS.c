#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int a, b, c, d, e, f;
        scanf("%d %d %d", &a, &b, &c);
        scanf("%d %d %d", &d, &e, &f);

        int one = a+b+c;
        int two = d+e+f;
        if(one>two){
            printf("DRAGON \n");
        }
        else if((one==two) && a>d){
            printf("DRAGON \n");
        }
        
        else if((one==two) && a==d && b>e){
            printf("DRAGON \n");
        }

        else if(a==d && b==e && c==f){
            printf("TIE \n");
        }

        else{
            printf("SLOTH \n");
        }
    }

    return 0;
}