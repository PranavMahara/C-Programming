// Take 10 integers from keyboard using loop and print their average value on the screen.

#include<stdio.h>

int main(){
    int sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("Average of %d \n", i);
        sum = sum + i;
    }
    printf("\nAverage is %.2f", (float)sum/n);
    return 0;
}