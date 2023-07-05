#include<stdio.h>

int main(){
    
    float percentile[5];

    for(int i=0; i<5; i++){
        printf("The percentile of %d is: ", i+1);
        scanf("%f", &percentile[i]);
        
    }

    for(int i=0; i<5; i++){
        printf("The percentile of %d is %f \n", i+1, percentile[i]);
        
    }


return 0;
}