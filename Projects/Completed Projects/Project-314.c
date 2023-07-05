// Recursive C program to find sum of digits of a number

#include <stdio.h>

int sum_of_digit(int n){
	if (n == 0){
	    return 0;
    }
    else{
	    return (n % 10 + sum_of_digit(n / 10));
    }
}

int main(){
	int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
	int result = sum_of_digit(num);
	printf("Sum of digits in %d is %d\n", num, result);
	return 0;
}
