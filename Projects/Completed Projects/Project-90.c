// Check whether a number is positive, negative or zero using a switch case

#include<stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch(number>0){
        case 1:
            printf("Number is positive");
            break;

        case 0:
            switch(number<0){
                case 1:
                    printf("Number is negative");
                    break;

                case 0:
                    printf("Number is zero");
            }
    }
    return 0;
}