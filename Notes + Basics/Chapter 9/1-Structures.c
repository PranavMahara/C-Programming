// Structures can hold similar data unlike arrays and strings

#include<stdio.h>
#include<string.h>

    struct employee{
        int code;
        float salary;
        char name[10];
    };

    int main(){

    struct employee e1; // e1 ki jagah kuch bhi kar sakte ho like arjun bhi likh sakte ho
    e1.salary = 1324.34;
    e1.code = 234;
    // e1.name = "Arjun" WRONG 
    
    strcpy(e1.name, "ARJUN"); // String, For this we use  #include<string.h>  
    
    printf("%d \n", e1.code); 
    printf("%f \n", e1.salary); 
    printf("%s \n", e1.name); 
 
    return 0;
}