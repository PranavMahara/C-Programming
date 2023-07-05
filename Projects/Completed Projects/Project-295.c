// // Write a program in C to find the number of times a given word 'the' appears in the given string. Go to the editor

// Test Data :
// Input the string : The string where the word the present more than once.

// Expected Output :

// The frequency of the word 'the' is : 3 

#include<stdio.h>
#include<string.h>

int main(){
    int freq = 0;
    int t, h, e, spc;
    int the = 0;
    char inp[100];
    printf("Enter Line--> ");
    gets(inp);

        

    for(int i=0; i<=strlen(inp)-3;i++){   // 3 because t  h  e  --> 3 words
        
        t=(inp[i]=='t'||inp[i]=='T');
		h=(inp[i+1]=='h'||inp[i+1]=='H');
		e=(inp[i+2]=='e'||inp[i+2]=='E');
        spc=(inp[i+3]==' '||inp[i+3]=='\0');
		
        if ((t&&h&&e&&spc)==1)
		   freq++;
	    }
    
    printf("it is repeated %d times", freq);
    return 0;
}