//  Write a program in C to count total number of vowel or consonant in a string

#include<stdio.h>
#include<string.h>

int main(){
    int vowel = 0, cons = 0;
    char name[100];
    printf("Enter your name: ");
    gets(name);                         
    // printf("Your name is %s", name);

    for(int i=0; i<strlen(name); i++){
        
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U'){
            vowel++;
        }
        else{
            cons++;
        }
    }
    printf("The number of vowels in the string is %d \n", vowel);
    printf("The number of consonant in the string is %d \n", cons);

    return 0;
}
