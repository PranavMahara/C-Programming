// Convert a person’s name in Abbreviated

#include<stdio.h>

int main(){
    char front_name[100];
    char middle_name[100];
    char last_name[100];

    printf("Enter your front name--> ");
    gets(front_name);

    printf("Enter your middle name--> ");
    gets(middle_name);

    printf("Enter your last name--> ");
    gets(last_name);

    printf("Your name in Abbreviated Form is %c. %c. %s", front_name[0], middle_name[0], last_name);
    
    return 0;
}