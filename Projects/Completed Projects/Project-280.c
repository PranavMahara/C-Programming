//  Find the first occurrence of a word in a given string

#include <stdio.h>
 
int main(){
  	char str[100], word[100];
  	int i, j, Flag;
 
  	printf("Please Enter any String:  ");
  	gets(str);
  	
	printf("Please Enter the Word that you want to Search for:  ");
  	gets(word);
	     	   	
  	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == word[0]){
			Flag = 1;
			for(j = 0; word[j] != '\0'; j++){
				if(str[i + j] != word[j]){
					Flag = 0;
					break;
				}
			}	
		}
		if(Flag == 1){
			break;
		} 
	}
	if(Flag == 0){
  		printf("Not found in '%s' ", word);
	}
	else{
		printf("We found '%s' at position %d ", word, i + 1);
	}	
	
  	return 0;
}