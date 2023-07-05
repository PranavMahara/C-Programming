// roots of a quadratic equation using switch case.

#include<stdio.h>
#include<math.h>

int main(){
    int b, a, c;
    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    float d = pow(b*b-4*a*c, 1/2.0);
    printf("%.2f \n", d);

    switch(d>0){
        case 1:
        printf("The Roots are real.......");

        case 0:
            switch(d<0){
                case 1:
                printf("The Roots are imaginary.......");
            
                case 0:
                printf("Equal Roots");
            }
    }
    return 0;
}