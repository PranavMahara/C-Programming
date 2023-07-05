#include<stdio.h>
#include<string.h>

int main(){
    char p[100];
    scanf("%[^\n]s", p);
    
    // printf("%s", p); // This will put full if we use simple scanf("%s", p)  it will print only first word as it stops as soon as space come
                    // In this when new line comes only then the scanf stops

    int value = strcmp(p, "Arjun");
    printf(value);
    return 0;
}