// The values of a structure variable can be assigned to another 
// structure variable of the same type using the assignment 
// operator. It is not necessary to copy the structure elements 
// piece-meal. Obviously, programmers prefer assignment to 
// piece-meal copying. This is shown in the following example.

#include<stdio.h>

int main(){
    struct employee 
    { 
    char name[10] ; 
    int age ; 
    float salary ; 
    } ; 
    struct employee e1 = { "Sanjay", 30, 5500.50 } ; 
    struct employee e2, e3 ; 
    /* piece-meal copying */ 
    strcpy ( e2.name, e1.name ) ; 
    e2.age = e1.age ;
    e2.salary = e1.salary ; 
    /* copying all elements at one go */ 
    e3 = e2 ; 
    printf ( "\n%s %d %f", e1.name, e1.age, e1.salary ) ; 
    printf ( "\n%s %d %f", e2.name, e2.age, e2.salary ) ; 
    printf ( "\n%s %d %f", e3.name, e3.age, e3.salary ) ; 
    return 0;
}
// Ability to copy the contents of all structure elements of one 
// variable into the corresponding elements of another structure 
// variable is rather surprising, since C does not allow assigning 
// the contents of one array to another just by equating the two. 
// As we saw earlier, for copying arrays we have to copy the 
// contents of the array element by element. 
// This copying of all structure elements at one go has been 
// possible only because the structure elements are stored in 
// contiguous memory locations. Had this not been so, we would 
// have been required to copy structure variables element by 
// element. And who knows, had this been so, structures would 
// not have become popular at all. 