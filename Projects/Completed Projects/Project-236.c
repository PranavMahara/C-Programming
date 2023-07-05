//  Write a program in C to check whether two given strings are an anagram.
// An anagram of a string is another string that contains the same characters, only the order of characters can be different.
//  For example, “abcd” and “dabc” are an anagram of each other.

#include<stdio.h>
#include<string.h>

int main(){
    int temp;
    char abc[100], bcd[100];

    printf("Please Enter String - 1: ");
    gets(abc);

    printf("Please Enter String - 2: ");
    gets(bcd);

    int a = strlen(abc);
    int b = strlen(bcd);

    // ATG CONCEPT --> Enter both strings, make them alphabetically then compare via strcmp if equal then anagram, simple lol
    
            for (int i = 0; i < a-1; i++){
	        	for (int j = i+1; j < a; j++){
	        		if(abc[i] > abc[j]) {
	        				temp = abc[i];
	        				abc[i] = abc[j];
	        				abc[j] = temp;
	        		}
	        	}
	        }

            for (int i = 0; i < b-1; i++){
	        	for (int j = i+1; j < b; j++){
	        		if(bcd[i] > bcd[j]) {
	        				temp = bcd[i];
	        				bcd[i] = bcd[j];
	        				bcd[j] = temp;
	        		}
	        	}
	        }

    // printf("%s \n", abc);
    // printf("%s", bcd);

    if(strcmp(abc, bcd) == 0){
        printf("The string is anagram");
    }

    else{
        printf("Anagram not possible");
    }
    return 0;
}