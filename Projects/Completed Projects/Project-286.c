// Write a program in C to convert a binary number into a decimal number without using array, function and while loop

#include <stdio.h>

void main(){
    int n , p=1;
	int dec = 0, i = 1, d;

	printf("Input a binary number: ");
	scanf("%d", &n);

	int n1 = n;

	for (int j = n; j>0; j= j/10){  
        d = j % 10;
            if(i==1){
                  p=p*1;
            }
            else{
                 p=p*2;
            }

	   dec= dec + (d*p);
	   i++;
	}
        printf("The equivalent Decimal  Number: %d", dec);
}