#include<stdio.h>
struct identity{
    int number;
    char name[100];
};

void entries(struct identity *emp){
    printf("Enter number: ");
    scanf("%d", &emp->number);    
    printf("Enter name: ");
    scanf("%s", emp->name);    
}

void show(struct identity *emp){
    printf("Number --> %d\n", emp->number);
    printf("Name --> %s\n", emp->name);
}

int main(){
    struct identity iden1;
    struct identity *ptr = &iden1;
    entries(&iden1);
    show(&iden1);
    return 0;
}