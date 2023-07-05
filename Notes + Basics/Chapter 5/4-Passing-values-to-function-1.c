#include<stdio.h>
int sum(int a, int b); // sum is a function which takes a and b as input and returns as integer as an output
                       // int sum(int a, int b); is function prototype declaration
                       // jo function value leta hai voh parameter and those which give output is return value
                       // int is return value, a b are parameters 

int main(){
    int c;
    c = sum(58,5); // function call      // a, b are parameter, 2 and 5 are arguements , arguements a and b ko milenge like in this a is 2 and b is 5
    printf("The value of c is %d \n", c);
    return 0;
}

int sum(int a, int b){
    int c; // niche vala c and upar wala c alag alag hai upar vala c uska variable hai niche vale ka apna khud ka variable hai
    c = a+b; // c ki jaga kuch bhi likho ab,bc ,atg, gtg
    
}
