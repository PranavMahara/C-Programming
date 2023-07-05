//Simple Calculator using switch Statement

#include<stdio.h>

int main(){
    float a, b;
    char op;
    printf("Enter an operator +, -, *, / --> ");
    scanf("%c", &op);

    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);

    switch(op){
        case '+' :
        printf("This is Addition and answer is %.2f + %.2f --> %.2f", a, b, a+b);
        break;        
    
        case '-' :
        printf("This is Addition and answer is %.2f - %.2f --> %.2f", a, b, a-b);
        break;
    
        case '*' :
        printf("This is Addition and answer is %.2f*%.2f --> %.2f", a, b, a*b);
        break;
    
        case '/' :
        printf("This is Addition and answer is %.2f/%.2f --> %.2f", a, b, a/b);
        break;

        default :
        printf("No match");
    }
    return 0;
}