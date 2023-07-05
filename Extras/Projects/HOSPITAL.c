#include<stdio.h>

typedef struct inform{
    char name[100];
    int age;
    char email[100];
    char gender[10];
    char address[100];
    int contact;
    char doc_name[100];   
} inf;

int main(){
    printf("################################################## \n");
    printf("#                    HOSPITAL                    # \n");
    printf("################################################## \n");

    char username[100];
    int password, i;

    printf("\n");
    printf("\n");
    printf("Enter Username: ");
    gets(username);

    printf("Enter Password: ");
    scanf("%d", &password);

    // password is 5446

    if(password == 5446){
        printf("Password is correct! \n");
        printf("\n");
        printf("             RECORDS              \n");
        printf("\n");
        printf("1. Add Patients Record \n");
        printf("2. Search Patients Record \n");
        printf("\n");
        printf("Enter 1 or 2: ");
        inf patient[100];
            scanf("%d", &i);
            if(i==1){
                printf("Enter the Name of the patient: ");
                scanf("%s", patient[0].name);

                printf("Enter the Age of the patient: ");
                scanf("%d", &patient[0].age);

                printf("Enter the Email of the patient: ");
                scanf("%s", patient[0].email);

                printf("Enter the Gender of the patient: ");
                scanf("%s", patient[0].gender);

                printf("Enter the Address of the patient: ");
                scanf("%s", patient[0].address);

                printf("Enter the Contact Number of the patient: ");
                scanf("%d", &patient[0].contact);

                printf("The name of Doctor assigned to the patient: ");
                scanf("%s", patient[0].doc_name);

                printf("Patient Record Added Successfully! \n");                
            }
            printf("\n");

            printf("Enter 2 to review Patients Record or Enter 0 to end: ");
            scanf("%d", &i);
            printf("\n");
            if(i==2){
                    printf("The Name of the Patient is %s \n", patient[0].name);
                    printf("The Email of the Patient is %s \n", patient[0].email);
                    printf("The Gender of the Patient is %s \n", patient[0].gender);
                    printf("The Address of the Patient is %s \n", patient[0].address);
                    printf("The Contact Number of the Patient is %d \n", patient[0].contact);
                    printf("The Doctor Assigned to the Patient is %s \n", patient[0].doc_name);
            }
            else{
                printf("\n");
                printf("Thank you!! \n");
            }
    }
    else{
        printf("Password is incorrect!");
    }
    return 0;
}