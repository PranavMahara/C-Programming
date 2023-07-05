#include<stdio.h>
#include<string.h>

int main(){
    char st1[40] = "hello";
    char *st2 = "Arjun"; // or u can use --> //char st2[] = "Arjun";
    strcat(st1, st2); // SPACE nahi aaegi in output...
    printf("Now st1 is %s", st1);
    
return 0;
}