// // Write a C program to implement an inventory system. Store the item number, name, 
// rate and quantity on hand in a structure. Accept the details for five items into a 
// structure array and display the item name and its total price. At the end, display the 
// grand total value of the inventory

#include<stdio.h>

struct inven{
    int number;
    char name[10];
    float rate;
    int quantity;
};

int main(){
    struct inven inv[5];

    for(int i=0; i<5; i++){
        printf("Enter the item number --> ");
        scanf("%d", &inv[i].number);

        printf("Enter the name of item --> ");
        scanf("%s", inv[i].name);

        printf("Enter the rate --> ");
        scanf("%f", &inv[i].rate);
        
        printf("Enter the quantity --> ");
        scanf("%d", &inv[i].quantity);
        
    }

    printf(" ------------------------------- \n");
    float sum = 0;
    for(int i=0; i<5; i++){
        printf("The name of item %d is %s and its total price is %.2f \n", i+1, inv[i].name, (float)inv[i].rate*inv[i].quantity);
        printf(" \n");
        sum = sum + (float)inv[i].rate*inv[i].quantity;
    }

    printf("The total sum is %.3f", sum);

    return 0;
}