// Friendly pair or not

#include<stdio.h>

int main(){

	int num1, num2;
    printf("Enter the numbers --> ");
	scanf("%d %d", &num1, &num2);

	int sum1 = 0, sum2 = 0;
    
	for(int i = 1; i < num1; i++){
		
        if(num1 % i == 0){
			sum1 = sum1 + i;
		}

	}

	for(int i = 1; i < num2; i++){
		if(num2 % i == 0){
			sum2 = sum2 + i;
		}
	}

	if(sum1 == num1 && sum2 == num2){
		printf("Friendly Pair");
    }
	else{
		printf("Not Friendly Pair");
    }
	return 0;
}