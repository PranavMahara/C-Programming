#include<stdio.h>
int atg(int *a, int *b);

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("The value of a*b is %d", atg(&a, &b));


return 0;
}

int atg(int *a, int *b){
    int arjun;
    *a = 10, *b = 15; // a b kuch bhi daalo upar abb aaega toh 150 hii #CallByRef
    arjun = (*a)*(*b);  
}