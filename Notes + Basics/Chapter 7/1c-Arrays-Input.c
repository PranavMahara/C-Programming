#include<stdio.h>

int main(){
    float percentile[6];

    percentile[0] = 99.87;
    percentile[1] = 99.83;
    percentile[2] = 99.85;
    percentile[3] = 99.88;
    percentile[4] = 99.81;

    printf("Enter percentile 5: ", percentile[5]);
    scanf("%f", &percentile[5]);

    printf("percentile 0, 1, 2, 3, 4 is %f, %f, %f, %f, %f \n", percentile[0], percentile[1], percentile[2], percentile[3], percentile[4]);

    printf("ATG ki percentile is %f", percentile[5]);
return 0;
}