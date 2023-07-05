// Write a program in C to display first n Fermat numbers

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter upto kaha tak nikaloge: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("%d ", (int)(pow(2, pow(2, i))+1));
    }
    return 0;
}