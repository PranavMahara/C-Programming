#include<stdio.h>

int main(){
    int age;
    printf("Enter your age ");
    scanf("%d", &age);

    if(age>=70){
        printf("You are above 70, you cannot drive \n");
    }
    else{
        printf("You can drive \n");
    }    

    if(age==69){               // (age=69) '=' is assignemnt operator this will come out on every code which is executed 
                               // but when we will us == this is equality operator this will execute in true condition only
        printf("You are cool \n");
    }
    
    if(age>=48){
        printf("You are going to be old");
    }

    else{
        printf("Abhi javani baaki hai mere dost");
    }


    return 0;
}       