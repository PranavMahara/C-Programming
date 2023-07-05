// Call by Reference

#include<stdio.h>
void wrong_swap(int a, int b); //wrong_swap(x,y) will not work since it is call by value
void swap(int *a, int *b);


int main(){
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d \n", x, y);
    //wrong_swap(x,y) will not work since it is call by value
    swap(&x, &y); // This is call by reference  // int *a = &x and int *b = &y
    printf("The value of x and y after swap is %d and %d \n", x, y);

    
    return 0;
}

// void wrong_swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

// }

void swap(int*a, int*b){ // *a basically, a ek address hai so *a is like value at address 'a'
    int temp;
    temp = *a; // address ki value ko prapt karne ke liye *(value at) lagate hai
    *a = *b;    // agar 'a' ek address hai so *a is value at that address
    *b = temp;
}









// Reversing Conept
// Step-1         a = 3     b = 4     temp    Creating temp
// Step-2         temp = a  
// Step-3         a = 3     b = 4     temp=3
// Step-4         a = b
// Step-5         b = temp
// Step-6         a = 4     b = 3     # CHANGED