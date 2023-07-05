#include<stdio.h>

int main(){ // Pointer - A variable which stores the address of another variable 
    int i = 34;
    int*j = &i; // j will now store the value of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j); // *j is value at address of j // j ke andar adress hai i ka and value of address se i print hoga, simple j=231, *j=*231, so *j = 14
    
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j); // j = &i j contains address of i
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));
    printf("The value of i is %u\n", *(&i));
    
    
    return 0;
}