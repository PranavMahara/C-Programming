#include<stdio.h>

int main(){
    int i=5;
    for(int i=0; i<10; i++){
        if(i=5){
            continue;
        }

        printf("Hello %d\n", i);
    }
    return 0;
}