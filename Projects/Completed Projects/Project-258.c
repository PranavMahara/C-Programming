// Search all occurrences of a character in a given string.

#include<stdio.h>
#include<string.h>

int main(){
	char abc[100];
	printf("Enter the string --> ");
	gets(abc);

	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);

	int k = strlen(abc);

	for(int i = 0; i < k; i++){
		if(abc[i]==ch){
			printf("Occurence of '%c' at %d \n", ch, i+1);
		}
	}
	return 0;
}