#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the value of natural number upto which you want to find the sum: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d+",i);
        sum = sum + i;
    }
    printf("\nTotal sum is %d", sum);
    return 0;
}