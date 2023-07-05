// GCD of 2 numbers

#include <stdio.h>

int main(){
    int a, b, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    for(int i=1; i <= a && i <= b; ++i){
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", a, b, gcd);

    return 0;
}

#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2){
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);

    return 0;
}


/*
#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
*/

// GCD of 2 numbers

// #include <stdio.h>

// int main(){
//     int a, b;

//     printf("Enter two integers: ");
//     scanf("%d %d",&a,&b);

//     a = ( a > 0) ? a : -a;
//     b = ( b > 0) ? b : -b;

//     while(a!=b){
//         if(a > b)
//             a -= b;
//         else
//             b -= a;
//     }
//     printf("GCD = %d",a);

//     return 0;
// }