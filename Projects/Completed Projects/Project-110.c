// Write a program in C to display the n terms of even natural number and their sum.

#include<stdio.h>

int main(){
    int i, n;
    i = 1;
    int sum = 0;

    printf("Enter the value of n--> ");
    scanf("%d", &n);

    while(i<=n){
        if(i%2==0){
            printf("%d \n", i);
            sum = sum+i;
            
        }
        i++;
    }
    printf("The sum of even numbers is %d", sum);
    return 0;
}
// OTHER WAY (BETTER)

// #include<stdio.h>

// int main(){
//     int sum = 0;
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//         printf("Even numbers --> %d \n", i);
//         sum = sum + i;
//         }
//     }
//     printf("The sum is %d", sum);
//     return 0;
// }