// Write a C program for storing the details of ‘N’ Customers in Telephone Directory 
// Database and searching and displaying details of particular customer using structure.

#include<stdio.h>

struct telephone{
    char name[100];
    int number;
    char address[100];
};

int main(){
    int n;
    printf("Enter the number of customers u gonna add: ");
    scanf("%d", &n);

    struct telephone user[n];

    for(int i=0; i<n; i++){
        printf("Enter the details for customer %d --> \n", i+1);
        printf("Enter the name of person --> ");
        scanf("%s", user[i].name);

        printf("Enter the number of person --> ");
        scanf("%d", &user[i].number);

        printf("Enter the address of person --> ");
        scanf("%s", user[i].address);

        printf("Details of customer %d is saved successfully \n", i+1);
    }

    int k;
    printf("Enter the customer number whose details u gonna find --> ");
    scanf("%d", &k);

    printf("Name of person --> %s \n", user[k-1].name);
    printf("Number of person --> %d \n", user[k-1].number);
    printf("Address of person --> %s \n", user[k-1].address);
    return 0;
}