#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct user{
    char name[100];
    char task[100];
};

int main(){
    struct user usr;
    char filename[50];
    FILE *fp;
    printf("Enter your name -- > ");
    gets(usr.name);

    printf("1. Add a task\n");
    printf("2. Mark a task as completed\n");
    printf("3. Show all tasks: \n");
    printf("4. Show uncompleted tasks\n");
    printf("5. Report\n");

    int option;
    printf("Your choice: ");
    scanf("%d", &option);

    if(option==1){
        system("cls");
        printf("Enter the task --> ");
        scanf("%s", usr.task);

        strcpy(filename, usr.name);
        fp = fopen(strcat(filename, ".dat"), "w");
        fwrite(&usr, sizeof(struct user), 1, fp); 

        if(fwrite != 0){
            printf("Task Added Successfully! \n");
        }

        else{
            printf("Something went wrong, Try AGAIN\n");
        }
        fclose(fp);
    }

    if(option==2){
        system("cls");
        fp = fopen(strcat(filename, ".dat"), "r");
        fread(&usr, sizeof(struct user), 1, fp);
        fclose(fp);
        
        printf("%s \n", usr.task);
        

    }


    return 0;
}