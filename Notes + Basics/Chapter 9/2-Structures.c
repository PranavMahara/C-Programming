#include<stdio.h>
#include<string.h>

struct arjun{
    int code;
    float income;
    char name[10];
};

int main(){

    struct arjun rushil;

    rushil.income = 2.09;
    rushil.code = 1234;

    strcpy(rushil.name, "RUSHIL");

    printf("Name of the employee is %s \n", rushil.name);
    printf("Income of the employee is %f \n", rushil.income);
    printf("Code of the employee is %d \n", rushil.code);

    
return 0;
}