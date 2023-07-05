#include<stdio.h>

int main(){
    int n;
    printf("Which Number do you want to find table of: ");
    scanf("%d", &n);


    int mul[10];
    for(int i=0; i<10;i++){
        printf("%dx%d = %d \n", n, i+1, n*(i+1));
    }
    return 0;
}