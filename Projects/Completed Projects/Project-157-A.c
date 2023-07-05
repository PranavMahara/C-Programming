//  Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

#include<stdio.h>
#include<math.h>

int main(){
    float n, sum=0;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    for(int i=1;i<=n; i++){
        printf("The sum of %.0f \n", pow(10, i)-1);
        sum = sum + pow(10, i)-1;
    }

    printf("After Adding All, sum becomes %.0f", sum);
    
    return 0;
}


