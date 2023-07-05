// Write a C program that reads an integer between 1 and 12 and print the month of the year in English using switch case

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    switch(n==1){
        case 1:
        printf("January");

        case 0:
        switch(n==2){
            case 1:
            printf("February");

            case 0:
            switch(n==3){
                case 1:
                printf("March");

                case 0:
                switch(n==4){
                    case 1:
                    printf("April");

                    case 0:
                    switch(n==5){
                        case 1:
                        printf("May");

                        case 0:
                        switch(n==6){
                            case 1:
                            printf("June");

                            case 0:
                            switch(n==7){
                                case 1:
                                printf("July");

                                case 0:
                                switch(n==8){
                                    case 1:
                                    printf("August");

                                    case 0:
                                    switch(n==9){
                                        case 1:
                                        printf("September");

                                        case 0:
                                        switch(n==10){
                                            case 1:
                                            printf("October");

                                            case 0:
                                            switch(n==11){
                                                case 1:
                                                printf("November");

                                                case 0:
                                                switch(n==12){
                                                    case 1:
                                                    printf("December");

                                                    case 0:
                                                    return 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}