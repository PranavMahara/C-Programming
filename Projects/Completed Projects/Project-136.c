// Permutations in which n people can occupy r seats in a theatre
// nPr

#include<stdio.h>

int main(){
    int n, r, factorial=1, facto=1;
    printf("Enter the number of people n: ");
    scanf("%d", &n);

    printf("Enter the number of seats in theatre: ");
    scanf("%d", &r);

    for(int i=1; i<=n; i++){
            factorial = factorial*i;
    }

    for(int i=1; i<=(n-r); i++){
            facto = facto*i;
    }


    printf("The Permutation is %d", factorial/facto);
    return 0;
}