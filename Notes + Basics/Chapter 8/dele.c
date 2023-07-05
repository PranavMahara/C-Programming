#include <stdio.h>
int main(){
    int n1,n2;
    char c;
    printf("enter first number\n");
    scanf("%d", &n1);
    
    printf("enter second number\n");
    scanf("%d", &n2);
    
     printf("enter operator of your choice\n");
    printf("operators can be +,-,*,/,%\n");
    scanf("%s", &c);
    
    if(c == '+'){
        printf("sum of %d "," %d is =%d", n1,n2,n1+n2);
    }
    else if (c =='-'){
        printf("substraction of %d "," %d is =%d", n1,n2,(n1-n2));
    }
    else if (c =='*'){
        printf("product of %d ", "%d is =%d", n1,n2,(n1*n2));
    }
    else if (c =='/'){
        printf("division of %d "," %d is =%d", n1,n2,(n1/n2));
    }
    else if (c =='%'){
        printf("remainder of %d "," %d is =%d" ,n1,n2,(n1%n2));
    }
    else {
        printf("invalid operator");
    }


    
    return 0;
}