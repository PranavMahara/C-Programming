// Largest of three numbers using Ternary Operator

# include <stdio.h>

int main(){
    int a, b, c, great;
    printf("Enter the numbers : \n");
    scanf("%d %d %d", &a, &b, &c);
    great = a>b?(a>c?a:c):(b>c?b:c);
    printf("%d is the greatest number", great);
}