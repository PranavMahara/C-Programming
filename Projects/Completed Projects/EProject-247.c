// Write a program in C to convert a binary number to octal.
// Error in calculation

// Take the given binary number
// Multiply each digit by 2^n-1 where n is the position of the digit from the decimal (right to left)
// The resultant is the equivalent decimal number for the given binary number
// Divide the decimal number by 8
// Note the remainder
// Continue the above two steps with the quotient till the quotient is zero
// Write the remainder in the reverse order
// The resultant is the required octal number for the given binary number

#include<stdio.h>
#include<math.h>

int main(){
    int sum = 0;
    int count = 0;
    int n;
    printf("Enter the binary number: ");
    scanf("%d", &n);

    int k = n;

    while(n!=0){
        count++;
        n = n/10;
    }

    int arr[count];
    for(int i=0; i<count; i++){
        int l = k%10;
        arr[i] = l;
        k = k/10;
    }

    for(int i=0; i<count; i++){
        // printf("%d", arr[i]);
        sum = (int)(sum + arr[i]*pow(2, i));
    }

    // printf("Decimal --> %d \n", sum);

    int octal = sum;
    int sum_count = 0;


    while(sum!=0){
        sum_count++;
        sum = sum/10;
    }

    int oct[sum_count];
    for(int i=0; i<sum_count; i++){
        int l = octal%8;
        oct[i] = l;
        octal = octal/10;
    }

    for(int i=(sum_count-1); i>=0;i--){
        printf("%d", oct[i]);
    }
    

    return 0;
}