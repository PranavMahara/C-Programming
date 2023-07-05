#include<stdio.h>

int main(){
    float b = 1.1;

    while(b<=10){
        printf("The value of b is %.2f \n", b);
        if(b==4.10){
            break;
        }
        b++;
    }
    return 0;
}