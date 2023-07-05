// Write a C program to read a password until it is correct. 
// For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. 
// The correct password is 1234. 

#include<stdio.h>

int main(){
    int password;
    printf("Please enter Password --> ");
    scanf("%d", &password);

    while(password!=1234){
        printf("The password is incorrect!! \n");
        printf("Please enter Password --> ");
        scanf("%d", &password);

        if(password==1234){
            printf("PASSWORD MATCHES");
        }
    }
    return 0;
}

// do using loop also