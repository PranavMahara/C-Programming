#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int year;
        scanf("%d", &year);
        if(year==2010 || year==2015 || year==2016 || year==2017 || year ==2019){
            printf("HOSTED\n");
        }

        else{
            printf("NOT HOSTED\n");
        }
    }
    return 0;
}