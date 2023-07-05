// Max number of handshakes

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of (number of people) n: ");
	scanf("%d", &n);

	int total = n * (n-1) / 2; // Combination nC2

	printf("%d",total);
    return 0;
}
