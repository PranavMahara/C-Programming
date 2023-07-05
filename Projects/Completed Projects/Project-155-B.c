// Write a C program to display sum of series k + k/2 + k/3 + ………. + k/n.  
// 'k'(Take Input) ki jagah kuch bhi ho sakta hai!
// Like if k=5
// 5 + 5/2 + 5/3 + ………. + 5/n.  

#include<stdio.h>
#include<math.h>

int main(){
    int k;
    printf("Enter the value of (k + k/2 + k/3 + ..... + k/n) k: ");
    scanf("%d", &k);
    int n;
    float sum = 0;
    printf("Enter the value upto which iu want to calculate (n): ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("Adding %.2f \n", k*pow(i, -1));
        sum = sum + pow(i, -1);
    }

    printf("Sum is %.2f", k*sum); // simple 5+5/2+5/3+.......5/n --> 5*(1+1/2+1/3+......1/n)
    return 0;
}