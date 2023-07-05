// Write a program in C to check if a number is Keith or not(with explanation).
// A n digit number x is called Keith number if it appears in a special sequence (defined below) generated using its digits. 
// The special sequence has first n terms as digits of x and other terms are recursively evaluated as sum of previous n terms.
// Input : x = 197
// Output : Yes
// 197 has 3 digits, so n = 3
// The number is Keith because it appears in the special
// sequence that has first three terms as 1, 9, 7 and 
// remaining terms evaluated using sum of previous 3 terms.
// 1, 9, 7, 17, 33, 57, 107, 197, .....

#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int k = n;
    int r = n;

    int count = (int)log10(n)+1;

    int arr[count];

    for(int i=(count-1); i>=0; i--){
        int p = k%10;
        arr[i] = p;
        k=k/10;
    }

    int kei[r];

    for(int i=0; i<count; i++){
        kei[i] = arr[i];
    }

    // for(int i=0; i<count; i++){
    //     printf("%d ", kei[i]);
    // }

    for(int i = count; i<r; i++){
        kei[i] = kei[i-1] + kei[i-2];
    }

    for(int i=0; i<r; i++){
        if(kei[i]<=r){
            printf("%d \n", kei[i]);
        }       
    }
    return 0;
}