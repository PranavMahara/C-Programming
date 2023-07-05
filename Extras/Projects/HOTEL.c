#include<stdio.h>
#include<time.h>

typedef struct bill{

    char nam[100];
    int price;
    int quant;

}abc;

int main(){
    char name[100];
    printf("Please enter the name of the customer: ");
    gets(name);

    int quantity;
    printf("Enter the number of items: ");
    scanf("%d", &quantity);
    printf("\n");

    abc bill[quantity];

    for(int i=0; i<quantity; i++){
        printf("Please enter the name of item-%d:   ", i+1);
        scanf("%s", bill[i].nam);

        printf("Enter the unit price of item-%d:    ", i+1);
        scanf("%d", &bill[i].price);
        
        printf("Enter the quantity of item-%d:      ", i+1);
        scanf("%d", &bill[i].quant);

        printf("--------------------------------------- \n");
    }
    printf("\n");
    printf("\n");

    int sum = 0;
    for(int i=0; i<quantity; i++){
        sum = sum + (bill[i].quant)*(bill[i].price);
    }
    int k;
    

    printf("                    RECEIPT                 \n");
    printf("                    -------                 \n");

    time_t t; 
    time(&t);

    printf("%s", ctime(&t));
    printf("Invoice To: %s \n", name);
    printf("--------------------------------------- \n");

        printf("Items         Qty         Total \n");
        printf("--------------------------------------- \n");
    for(int i=0; i<quantity; i++){
        printf("%s          %d          %d \n", bill[i].nam, bill[i].quant, (bill[i].quant)*(bill[i].price));
    }
        printf("--------------------------------------- \n");
        printf("Sub Total               %d \n", sum);
        printf("Discount (@10%)         %.2f \n", (float)0.1*sum);
        printf("                       --------- \n");
        printf("Net Total               %d \n", k = sum-0.1*sum);
        printf("CGST (@9%)              %.2f \n", (float)0.09*k);
        printf("SGST (@9%)              %.2f \n", (float)0.09*k);
        printf("--------------------------------------- \n");
        printf("Grand Total             %.2f \n", (float)(k+0.09*k+0.09*k));
        printf("--------------------------------------- \n");
    
    




    
    return 0;
}