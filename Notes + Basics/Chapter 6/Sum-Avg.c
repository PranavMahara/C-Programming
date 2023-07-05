#include<stdio.h>
int sum(int *a, int *b);
int avg(int *a, int *b);

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    sum(&a, &b);
    avg(&a, &b);

    return 0;
}

int sum(int *a, int *b){
    *a = 10; // upar kuch bhi daalo sum mein toh 10+1 = 11 hi aaega lol
    *b = 1;
    printf("The sum is %d \n", *a + *b);
}

int avg(int *a, int *b){
    printf("The avg is %.2f \n", (float)(*a + *b)/2);
}
