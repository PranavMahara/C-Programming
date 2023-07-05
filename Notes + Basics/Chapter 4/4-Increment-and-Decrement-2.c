#include<stdio.h> // Increment Operators

int main(){
    int i = 5;
    printf("The value after i++ is %d \n", i++);  // ++i ka matlab pehle increment karo phir print karto and i++ ka matlab pehle print phir increment
    printf("The value of i is %d \n", i);         // output mein pehle 5 aara hoga and then 6
    // same will be the case with --i, i--
    // +++ operator does not exist
    // += is compound assignment operator   

    i+=10; // increment i by 10 ,      +=, -=, *=, /=, %= these all are compound assignment operator


    printf("The value of i is %d\n", i); // 16 isliye aa ra hai kyunki ek baar upar bhi i mein +1 kiya so no worries :)

    
    return 0;
}