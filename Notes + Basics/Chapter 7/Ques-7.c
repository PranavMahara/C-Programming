#include<stdio.h>

int main(){
    int multable[3][10];
    for(int i=0; i<10; i++){
        multable[0][i] = 2*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("2X%d = %d \n", i+1, multable[0][i]);
    }
    // ---------------------------------------------
    for(int i=0; i<10; i++){
        multable[1][i] = 7*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("7X%d = %d \n", i+1, multable[1][i]);
    }
    // ---------------------------------------------
    for(int i=0; i<10; i++){
        multable[2][i] = 9*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("9X%d = %d \n", i+1, multable[2][i]);
    }
    return 0;
}