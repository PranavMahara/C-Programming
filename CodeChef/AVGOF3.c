#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
            int x;
            scanf("%d", &x);
            int flag = 1;
            for(int i=1; i<100; i++){
                for(int j=2; j<100; j++){
                    for(int k=3; k<100; k++){
                        if((i+j+k)/3==x){
                            printf("%d %d %d \n", i, j, k);
                            flag == 1;
                            break;
                        }
                    }
                    if(flag==1){
                        break;
                    }
                }
                if(flag==1){
                        break;
                }
            }
    }

    



    return 0;
}