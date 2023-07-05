#include<stdio.h>

int main(){
    register int i=0;
    i++;
    if(i<=5){
        printf("%d", i);
        main();
    }
    else{
        exit(0);
    }
    return 0;
}