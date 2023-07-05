// Write a program to check whether the given no has odd no of odd digits or even no of even digits. 
// For example the number 21345 has two even numbers 2 and 4and three odd numbers 1,3 and 5. 
// Also print the digits and their positions.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int k = n;
    int p = n;
    int count = (int)log10(n)+1;

    if(count%2==0){
        printf("Total number of digits in %d is even \n", k);
    }
    
    else{
        printf("Total number of digits in %d is odd \n", k);
    }
    printf("\n");
    printf("-------------------------------------\n");
    printf("The even numbers in %d is \n", k);
    int i = 1;
    int sum = 0;
    while(k!=0){
        int l = k%10;
            if(l%2==0){
                printf("%d position --> %d\n", l, count - i + 1);
                sum++;
            }
        k=k/10;
        i++;
    }
    printf("Total even --> %d \n", sum);
    printf("\n");
    printf("-------------------------------------\n");
    printf("The odd number in %d are \n", p);
    i = 1;
    sum = 0;
    while(p!=0){
        int l = p%10;
            if(l%2!=0){
                printf("%d position --> %d\n", l, count - i + 1);
                sum++;
            }
        p=p/10;
        i++;
    }
    printf("Total odd --> %d \n", sum);

    return 0;
}
