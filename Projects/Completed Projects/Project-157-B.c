//  Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

// now getting any series like 2 + 22 + 222 + 2222........
// now getting any series like 5 + 55 + 555 + 5555........

#include<stdio.h>
#include<math.h>

int main(){
    float k;
    printf("Enter the number jisse aapko series likhni hai like 5 + 55 + 555 + 5555........, k: ");
    scanf("%f", &k);

    float n, sum=0;
    printf("Enter the value of upto which the series aapko likhni hai, n: ");
    scanf("%f", &n);

    for(int i=1;i<=n; i++){
        printf("The sum of %.0f \n", k*(pow(10, i)-1)/9);
        sum = sum + k*(pow(10, i)-1)/9;
    }

    printf("After Adding All, sum becomes %.0f", sum);
    
    return 0;
}


