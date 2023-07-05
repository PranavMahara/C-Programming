// // Write a program in C to find maximum occurring character in a string. Go to the editor

// Test Data :
// Input the string : Welcome to w3resource.com.

// Expected Output :

// The Highest frequency of character 'e' 
// appears number of times : 4 

#include<stdio.h>

int main(){
    char abc[100];
    printf("Enter the string: ");
    gets(abc);

    int a = strlen(abc);
    int freq[26];

    for(int i=0; i<26; i++){
        for(int j=i+1; j<a; j++){
            if(abc[j]==abc[i]){
                freq[i]++;
            }
        }
    }
    return 0;
}