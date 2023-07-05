#include<stdio.h>
#include<string.h>
struct employee{
    
    int code;
    float salary;
    char name[10];
    
    };

int main(){
    struct employee arjun = {100, 43.23, "ARJUN"};

    printf("Code is %d \n", arjun.code);
    printf("salary is %f \n", arjun.salary);
    printf("Name is %s \n", arjun.name);

        
return 0;
}