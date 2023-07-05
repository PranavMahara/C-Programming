#include<stdio.h>
#include<string.h>

int main(){
    char st1[40] = "Aello";
    char st2[] = "Hrjun";
    int val = strcmp(st1, st2);
    printf("Now val is %d", val); // 0 if strings is equal
                                  // Negative if first string's mismatching character
                                  // ASCII value is not greater than second string's corresponding mismatching character, it returns positive value otherwise.

    
return 0;
}