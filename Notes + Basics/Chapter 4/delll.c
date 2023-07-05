#include<stdio.h>

int main(){
    for(int i=0; i<20; i++){
        if(i!=10){
            printf("%d", i);
            continue;
        }
        
        printf("%d \n", i);
    }
    return 0;
}