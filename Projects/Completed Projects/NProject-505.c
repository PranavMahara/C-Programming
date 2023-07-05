// Octal Number

// Binary Number is base 2
// Octal Number is base 8
// Decimal Number is base 10
// 22(4) is a binary number
// 100(10) is a decimal number
// 40(16) is a hexadecimal number

// error printing digits 
#include<stdio.h>

int main(){
    int count = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int k = n;

    while(n!=0){
        count++;
        n=n/10;
    }

    int arr[count];
    int i=0;
    while(k!=0){
        int l = k%8;
        arr[i] = l;
        k = k/8;
        i++;
    }

    // for(int i=0; i<(count+1); i++){
    //     printf("%d \n", arr[i]);
    // }

    for(int i=(count-1); i>=0; i--){
        printf("%d", arr[i]);
    }
    return 0;
}