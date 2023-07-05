// Create an employee stucture with elements, empid, name, age, dept, designation, slaary
// Define array of employees and pass to a function to read the values and another function to
// sort the employees based on age attribute, display only empid and name
#include<stdio.h>

struct employee{
    int empid;
    char name[20];
    char dept[20];
    char designation[20];
    float salary;
};

void setData(struct employee *emp){
    for(int i=0; i<4; i++){
            printf("Employee %d:- \n",i+1);

            printf("Id: ");
            scanf("%d", &emp[i].empid);

            printf("Name: ");
            scanf("%[^\n]s", emp[i].name);

            printf("Depatment: ");
            scanf("%[^\n]s", emp[i].dept);

            printf("Salary: ");
            scanf("%lf", &emp[i].salary);


            printf("\n");
        }
}


int main(){
    struct employee emp[4];
    
    struct employee *ptr = emp;
    setData(&emp);

    
    return 0;
}