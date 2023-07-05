// Print nth digit(User Input) of number of n digit number!

#include<stdio.h>
#include<math.h>

int main(){
    int n, rem;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int k;    
    printf("Which digit u wanna know: ");
    scanf("%d", &k);

    while(n>=pow(10, (k-1))){
        rem = n%10;
        n = n/10;
    }

    if(k==1){
        printf("%dst digit is %d", k, rem);
    }
    else if(k==2){
        printf("%dnd digit is %d", k, rem);
    }
    else if(k==3){
        printf("%drd digit is %d", k, rem);
    }
    else{
        printf("%dth digit is %d", k, rem);
    }
    return 0;
}
