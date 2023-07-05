// Write a program in C to print a string in reverse using a pointer.

#include<stdio.h>
#include<string.h>

void rev(char *ptr, int a){
    int temp;
    for(int i=0; i<a/2; i++){
        temp = ptr[i];
        ptr[i] = ptr[a-i-1];
        ptr[a-i-1] = temp;
    }

}

int main(){
    char name[100];
    printf("Enter a string: ");
    gets(name);

    int a = strlen(name);

    rev(name, a);

    for(int i=0; i<a; i++){
        printf("%c", name[i]);
    }
    return 0;
}
