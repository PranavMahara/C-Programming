// // Write a C program which reads an integer (7 digits or fewer) and count number of 3s in the given number. Go to the editor
// Sample Input: 538453
// Sample Output:
// Input a number: The number of threes in the said number is 2

#include<stdio.h>

int main(){
    int count = 0;
    int count_two = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int f = n;

    while(n!=0){
        count++;
        n = n/10;
    }

    for(int i=(count-1); i>=0; i--){
        int k = f%10;
            if(k==3){
                count_two++;
            }
        f = f/10;
    }

    printf("The Number of threes is %d", count_two);


    return 0;
}