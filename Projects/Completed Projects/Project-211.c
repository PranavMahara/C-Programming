// Automorphic or not

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int k = n;
    int count = (int)log10(n)+1;
    int square;

    printf("Square of the number is %d \n", square = k*k);

    int f = (int)(pow(10, count));
    int last =  square%f;

    if(last == k){
        printf("Automorphic number \n");
    }
    else{
        printf("Not Automorphic \n");
    }

    return 0;
}