#include<stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumVec(struct vector v1, struct vector v2){
    struct vector res;
    res.x = v1.x + v2.x;
    res.y = v1.y + v2.y;
    return res;
}

int main(){
    struct vector v1, v2, sum;

    v1.x = 34;
    v1.y = 34;
    printf("X is %d and Y is %d \n", v1.x, v1.y);

    v2.x = 3345;
    v2.y = 534;
    printf("X is %d and Y is %d \n", v2.x, v2.y);

    sum = sumVec(v1, v2);

    printf("X is %d and Y is %d", sum.x, sum.y);

    return 0;
}