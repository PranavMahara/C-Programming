#include <stdio.h>

int main(){
    char N[20]   ;
    printf("Enter the first string : ");  
    scanf("%s", N);  
    if (N == "ram\0"){
        printf("lets play cricket");

    }
    else if (N == "rahul\0"){
        printf("lets play basketball");

    }
    else if (N == "rohan"){
        printf("lets play football   ");

    }
    else{
        printf("invalid");
    }
    
    // printf(N);

    
    return 0;
}