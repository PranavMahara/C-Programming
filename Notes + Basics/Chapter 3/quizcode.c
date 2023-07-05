#include<stdio.h>

int main(){
    int marks;
    printf("Please Enter Student's Marks ");
    scanf("%d", &marks);

    
    if(100<marks){
        printf("100 mein se hote hai marks lol");
    }
    
    else if(90<=marks){
        printf("Your Child has scored A grade");
    }

    else if(80<=marks){
        printf("Your Child has scored B grade");
    }

    else if(70<=marks){
        printf("Your Child has scored C grade");
    }

    else if(60<=marks){
        printf("Your Child has scored D grade");
    }

    else if(50<=marks){
        printf("Your Child has scored E grade");
    }
    else{
        printf("FAIL, usi class mein padna abb");
    }

    
    return 0;
}