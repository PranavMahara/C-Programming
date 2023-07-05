// // 1. Function with no argument and no return value : 
// // When a function has no arguments, it does not receive any data from the calling function.
// // Similarly when it does not return a value, the calling function does not receive any data from the called function.

// #include<stdio.h>
// void hello();

// int main(){
//     printf("Hello World \n");
//     hello();
//     printf("Bye World \n");
//     return 0;
// }

// void hello(){
//     printf("I am a function between Hello and Bye World! \n");
// }

// // 2. Function with arguments but no return value : 
// // When a function has arguments, it receive any data from the calling function but it returns no values.

// #include <math.h>
// #include <stdio.h>
  
// void b(int a);

// int main(){
//     b(5);
//     return 0;
// }
  
// void b(int a){
//     printf("%d", a);
// }

// // 3. Function with no arguments but returns a value : 
// // There could be occasions where we may need to design functions that may not take any arguments but returns a value to the calling function.

// #include <math.h>
// #include <stdio.h>
  
// int b();

// int main(){
//     printf("The value is %d", b());
//     return 0;
// }
  
// int b(){
//     int a = 50;
//     return a;
// }
// // 4. Function with arguments and a return value.

// #include<stdio.h>
// int sum(int a, int b);

// int main(){
//     printf("The sum of 5 and 7 is %d", sum(5, 7));
//     return 0;
// }

// int sum(int a, int b){
//     return a+b;
// }