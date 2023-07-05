// Write a program in C to show narcissistic numbers. 

#include<stdio.h>
#include<math.h>

int main(){
    int count = 0;
    int sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int f = n;
    int j = n;

    int arr[n];

    while(n!=0){
        count++;
        n = n/10;
    }

    printf("The count is %d \n", count);
    for(int i=0; i<count; i++){
    int k = f%10;
    arr[i] = k;
    f = f/10;
    }

    // for(int i=0; i<count; i++){
    //     printf("The value is %d \n", arr[i]);
    // }
    
    for(int i=0; i<count; i++){
        sum = sum + pow(arr[i], count);
    }

    printf("The sum is %d \n", (int)sum);

    if(sum == j){
        printf("The given number is narcissistic");
    }

    else{
        printf("The given number is not narcissistic");
    }
    
    return 0;
}