// Add 2 numbers using pointer

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    int *ptr_a = &a;
    int *ptr_b = &b;

    printf("The sum is %d", *ptr_a + *ptr_b);
    return 0;
}

// #include<stdio.h>
// int sum(int *a, int *b);

// int main(){
//     int a, b;
//     printf("Enter the value of a and b: ");
//     scanf("%d %d", &a, &b);

//     printf("The sum is %d", sum(&a, &b));
    
//     return 0;
// }

// int sum(int *a, int *b){
//     return *a+*b;
// }