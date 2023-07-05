#include<stdio.h>
#include<string.h>
struct employee{
    
    int code;
    float salary;
    char name[10];
    
    };

int main(){
    struct employee facebook[100];
    
    facebook[0].code = 100;
    facebook[0].salary = 2.232;
    strcpy(facebook[0].name, "Arjun");

    facebook[1].code = 4500;
    facebook[1].salary = 2.26842;
    strcpy(facebook[1].name, "GT");

    facebook[2].code = 600;
    facebook[2].salary = 2.235454532;
    strcpy(facebook[2].name, "KT");

    printf("name is %s \n", facebook[0].name);
    printf("code is %d \n", facebook[0].code);
    printf("salary is %f \n", facebook[0].salary);
    
    
return 0;
}