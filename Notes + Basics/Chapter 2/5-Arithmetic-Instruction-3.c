#include<stdio.h>

int main(){
    int a = 13;
    int b = 15;
    float c = 23.5;
    float d = 33.2;
    float e = 243; // aese likhna not recomended
    printf("Checking the value if addition takes place between integers %d \n", a + b);
    printf("Checking the value on adiition betwenn floats %f \n", c + d);
    printf("CHecking the value on adiition between floats and integers %f \n", a+c);
    
    // floats + integrs gives floats
    // integers + integers gives integer
    // floats + floats gives floates
    
    printf("The value of 5/2 is %d \n",5/2);  // 5/2 %d--> integer so 2 aajega, 2/5 ka zero aajega
    // float c = 23; will be stored as 23.0 if we do ---> printf("The value of 5/2 is %f \n",5);
    printf("The value of e is %f \n",e);

    return 0;
}