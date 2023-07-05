//  Write a program in C to check whether a number is a Pronic Number or Heteromecic Number or not.

#include<stdio.h>

int main(){
    int k;
    printf("Enter the number: ");
    scanf("%d", &k);

    for(int i=0; i<k; i++){
        if(i*(i+1)==k){
            printf("%dx%d-->%d \n", i, i+1, k);
        }
    }
    return 0;
}