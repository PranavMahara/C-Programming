// // Write a C programming to calculate (x + y + z) for each pair of integers x, y and z where -2^31 <= x, y, z<= 2^31-1. Go to the editor
// Sample Output:

#include<stdio.h>
#include<math.h>

int main(){
    float x, y, z;
    printf("Enter the value of x, y and z: ");
    scanf("%f %f %f", &x, &y, &z);

    

    if(-pow(-2, 31) <= x, y, z<= pow(2, 31)-1){
        printf("%f", x+y+z);
    }
    else{
        printf("Not in Range!");
    }
    return 0;
}