#include<stdio.h>
#include<string.h>
struct employee{
    
    int code;
    float salary;
    char name[20];
    
};

void show(struct employee emp){
    printf("The code of employee is %d \n", emp.code);
    printf("The code of employee is %f \n", emp.salary);
    printf("The code of employee is %s \n", emp.name);
    emp.code = 34;
}

int main(){
    struct employee e1;
    struct employee *ptr = &e1;

    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "ATG");

    show(e1);
    printf("The code of employee is %d \n", e1.code); // change ni hoga
    
    return 0;
}