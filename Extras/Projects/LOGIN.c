#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("---------------LOGIN---------------\n");
    printf("1. Login \n2. Sign Up \n3. Escape \n");
    int n;
    printf("Enter 1, 2 or 3: ");
    scanf("%d", &n);

    char Username[100];
    int mobile;
    int password;
    char Password[100];

    if(n==1){
        int p;
        srand(time(0));
        p = rand();
        printf("Pin --> %d \n", p); // Ofcourse this will not be displayed so chill!
        printf("Username: ");
        fflush(stdin);
        fgets(Username, 100, stdin);
        printf("An OTP has been sent to your mobile number XXXXX350 \n");
        printf("Password: ");
        scanf("%d", &password);

        if(p==password){
            printf("Credentials Match \n");
        }
        else{
            printf("Credentials did not Match... Try Again! \n");
        }

        printf("\n");
        printf("Thank you for signing up with ATG");
    }

    else if(n==2){
        printf("---------------SIGN UP---------------\n");
        printf("Enter Username: ");
        fflush(stdin);
        fgets(Username, 100, stdin);
        printf("Enter Password: ");
        fflush(stdin);
        fgets(Password, 100, stdin);

        printf("\n");
        printf("INFORMATION SAVED!!!");
    }

    else if(n==3){
        printf("Thank you!");
    }

    return 0;
}
