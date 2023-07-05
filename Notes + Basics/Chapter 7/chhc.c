#include<stdio.h>

int main(){
    int arr[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int *ptr = arr;

    printf("%d", *(*(arr)+1));



    return 0;
}