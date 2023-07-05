// Write a program in C to write multiple lines in a text file.

#include<stdio.h>

int main(){
    FILE *ptr;

    char str[100];
    int n;
    ptr = fopen("helloguys.txt", "w");
    printf("Enter the number of lines --> ");
    scanf("%d", &n);
    for(int i=0; i<n+1; i++){
        fgets(str, sizeof str, stdin);
        fputs(str, ptr);
    }
    fclose(ptr);

    ptr = fopen("helloguys.txt", "r");
    printf("Content of the file -->\n");
    char c = fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);


    return 0;
}