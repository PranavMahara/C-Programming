#include<stdio.h>
#include<string.h>
struct employee{
    
    int code;
    float salary;
    char name[20];
    
    };

int main(){
    struct employee e1;
    struct employee *ptr = &e1;

    // (*ptr).code = 101; or use niche vala that is ptr-> 
    ptr->code = 101;
    printf("%d", e1.code);
    
    return 0;
}