#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct user{
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main(){
    struct user usr, usr1;
    FILE *fp;
    char filename[50];
    char phone[50];
    char password[50];
    char cont = 'y';
    int choice;
    float amount;

    printf("What do you want to do?  \n");
    printf("1.Register\n");
    printf("2.Login\n");
    
    int option;
    printf("Your choice: ");
    scanf("%d", &option);

    if(option==1){
        system("cls"); // clears the code and then runs the downward code!
        printf("Enter your account number:\t");
        scanf("%s", usr.ac);
        
        printf("Enter your Phone number:\t");
        scanf("%s", usr.phone);
 
        printf("Enter your Password:\t");
        scanf("%s", usr.password);
        usr.balance = 0;    

        strcpy(filename, usr.phone);
        fp = fopen(strcat(filename, ".dat"), "w");
        fwrite(&usr, sizeof(struct user), 1, fp); 
        if(fwrite != 0){
            printf("Acoount Registered Successfully! \n");
        }
        else{
            printf("Something went wrong, Try AGAIN\n");
        }
        fclose(fp);
    }

    if(option==2){
        system("cls");
        printf("Enter phone number:\t");
        scanf("%s", phone);

        printf("Enter password\t");
        scanf("%s", password);
        strcpy(filename, phone);
        fp = fopen(strcat(filename, ".dat"), "r");

        if(fp== NULL){
            printf("Account Number not registered! \n");
        }
        else{
            fread(&usr, sizeof(struct user), 1, fp);
            fclose(fp);
            if(!strcmp(password, usr.password)){
                while(cont == 'y'){
                    system("cls");
                    printf("Press 1 to view balance: \n");
                    printf("Press 2 to deposit: \n");
                    printf("Press 3 to withdraw: \n");
                    printf("Press 4 to transfer money: \n");
                    printf("Press 5 to change the password: \n");

                    printf("\n");
                    printf("Enter your choice : ");
                    scanf("%d", &choice);

                    switch(choice){
                        case 1:
                        printf("Your current balance is Rs. %.2f \n", usr.balance);
                        break;

                        case 2:
                        printf("Enter the amount: ");
                        scanf("%f", &amount);
                        usr.balance += amount;
                        fp = fopen(filename, "w");
                        fwrite(&usr, sizeof(struct user), 1, fp);

                        if(fwrite!=NULL){
                            printf("Amount successfully deposited!\n");
                        }
                        fclose(fp);
                        break;

                        case 3:
                        printf("Enter the amount: ");
                        scanf("%f", &amount);
                        usr.balance -= amount;
                        fp = fopen(filename, "w");
                        fwrite(&usr, sizeof(struct user), 1, fp);

                        if(fwrite!=NULL){
                            printf("Amount successfully withdrawn !\n");
                        }
                        fclose(fp);
                        break;

                        case 4:
                        printf("Enter the phone number to whom you want to transfer: ");
                        scanf("%s", phone);
                        printf("Enter the amount to transfer: ");
                        scanf("%f", amount);
                        fp = fopen(strcat(filename, ".dat"), "r");
                        if(fp == NULL){
                            printf("Phone number not registered!!\n");
                        }
 
                        else{
                        if(amount>usr.balance){
                            printf("Insufficient Balance");
                        }

                        else{
                            strcpy(filename, phone);
                            
                            fread(&usr1, sizeof(struct user), 1, fp);
                            usr1.balance += amount;     
                            fwrite(&usr1, sizeof(struct user), 1,fp);
                            fclose(fp);

                            if(fwrite != NULL){
                                printf("You have successfully transferred Rs. %.2f to %s", amount, phone);
                                strcpy(filename, usr.phone);
                                fp = fopen(strcat(filename, ".dat"), "w");
                                usr.balance -=amount;
                                fwrite(&usr, sizeof(struct user), 1, fp);
                                fclose(fp);
                            }
                        } 
                    }
                    break;

                    case 5:
                    printf("Enter your new password: "); 
                    scanf("%s", password);
                    fp = fopen(filename, "w");
                    strcpy(usr.password, password);
                    fwrite(&usr, sizeof(struct user), 1, fp);

                    if(fwrite != NULL){
                        printf("Password Successfully Changed!! \n");
                        }
                    }

                    printf("Do you want to continue the transaction (y/n):  ");
                    scanf("%s", &cont);
                    break;


                }
            }
            else{
                printf("Password doesn't match!");
            }
        }
    }


    return 0;
}