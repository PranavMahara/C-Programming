//  Toggle case of each character of a string

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char abc[100];
    printf("Enter string: ");
    gets(abc);

    char *str = abc;

    int k = strlen(abc);

    for(int i=0; i<k; i++, str++){
			if(*str >= 'a' && *str <= 'z'){ // *str or str[i] without str++
				*str = *str - 32;
            }

			else if(*str >= 'A' && *str <= 'Z'){
				*str = *str + 32;
		    }
    }
    printf("The string is %s", abc);
    return 0;
}