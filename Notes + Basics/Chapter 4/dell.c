#include<stdio.h>

int main(){
    for(int i=0; i<25; i++){
        if(i==13){
            printf("%d", i);
            break;
        }
        else{
            printf("%d", i);
        }
    }
    return 0;
}