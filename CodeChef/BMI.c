#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int h, m;
        scanf("%d %d", &m, &h);

        int k = m/(h*h);

        if(k<=18){
            printf("1\n");
        }
        else if(k<=24){
            printf("2\n");
        }
        else if(k<=29){
            printf("3\n");
        }
        else{
            printf("4\n");
        }
    }
    return 0;
}