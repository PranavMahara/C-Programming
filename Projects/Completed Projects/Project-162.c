// Write a program in C to find the Hailstone Sequence of a given number upto n. Go to the editor
// Test Data :
// Input any number (positive) to start for Hailstone Sequence : 13
// Expected Output :

//  The hailstone sequence starting at 13 is :                                                                   
//  13  40  20  10  5  16  8  4  2 1                                                                             
//  The length of the sequence is 10.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value upto which u gonna find the hailstone sequence: ");
    scanf("%d", &n);

    int k;
    printf("Enter the first number: ");
    scanf("%d", &k);

    for(int i=1; i<n; i++){
        if(k%2==0){
            printf("%d \n", k = k/2);
        }
        else{
            printf("%d \n", k = 3*k+1);
        }
    }
    return 0;
}