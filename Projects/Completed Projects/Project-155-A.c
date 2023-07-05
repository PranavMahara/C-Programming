// Write a C program to display sum of series 1 + 1/2 + 1/3 + ………. + 1/n.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("Adding %.2f \n", pow(i, -1));
        sum = sum + pow(i, -1);
    }

    printf("Sum is %.2f", sum);
    return 0;
}