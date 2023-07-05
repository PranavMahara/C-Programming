// Conditional Compilation 
// We can, if we want, have the compiler skip over part of a source 
// code by inserting the preprocessing commands #ifdef and #endif, 
// which have the general form:


// #ifdef macroname 
    //  statement 1 ; 
    //  statement 2 ; 
    //  statement 3 ; 
// #endif 

// If macroname has been #defined, the block of code will be 
// processed as usual; otherwise not. 
// Where would #ifdef be useful? When would you like to compile 
// only a part of your program? In three cases: 


// (a)  To “comment out” obsolete lines of code. It often happens 
//      that a program is changed at the last minute to satisfy a client. 
//      This involves rewriting some part of source code to the 
//      client’s satisfaction and deleting the old code. But veteran 
//      programmers are familiar with the clients who change their 
//      mind and want the old code back again just the way it was.

//      Now you would definitely not like to retype the deleted code 
//      again. 
//      One solution in such a situation is to put the old code within a 
//      pair of /* */ combination. But we might have already 
//      written a comment in the code that we are about to “comment 
//      out”. This would mean we end up with nested comments. 
//      Obviously, this solution won’t work since we can’t nest 
//      comments in C.

#include<stdio.h>

int main(){
        #ifdef OKAY 
    statement 1 ; 
    statement 2 ; /* detects virus */ 
    statement 3 ; 
    statement 4 ; /* specific to stone virus */ 
    #endif 

    statement 5 ; 
    statement 6 ; 
    statement 7 ; 
    return 0;
}


// Here, statements 1, 2, 3 and 4 would get compiled only if the 
// macro OKAY has been defined, and we have purposefully 
// omitted the definition of the macro OKAY. At a later date, if 
// we want that these statements should also get compiled all 
// that we are required to do is to delete the #ifdef and #endif
// statements. 

// (b)      A more sophisticated use of #ifdef has to do with making the 
//          programs portable, i.e. to make them work on two totally 
//          different computers. Suppose an organization has two
//          different types of computers and you are expected to write a 
//          program that works on both the machines. You can do so by 
//          isolating the lines of code that must be different for each 
//          machine by marking them off with #ifdef. For example: 

// #include<stdio.h>

// int main(){
//     #ifdef INTEL 
//     code suitable for a Intel PC 
//     #else 
//     code suitable for a Motorola PC 
//     #endif 
//     code common to both the computers 
//     return 0;
// }

// When you compile this program it would compile only the 
// code suitable for a Intel PC and the common code. This is 
// because the macro INTEL has not been defined. Note that the 
// working of #ifdef - #else - #endif is similar to the ordinary if - 
// else control instruction of C. 
// If you want to run your program on a Motorola PC, just add a 
// statement at the top saying, 

// #define INTEL 

// Sometimes, instead of #ifdef the #ifndef directive is used. 
// The #ifndef (which means ‘if not defined’) works exactly 
// opposite to #ifdef. The above example if written using 
// #ifndef, would look like this:

#include<stdio.h>

int main(){
    #ifndef INTEL 
    code suitable for a Intel PC 
    #else 
    code suitable for a Motorola PC 
    #endif 
    code common to both the computers 
    return 0;
}

// (c)  Suppose a function myfunc( ) is defined in a file ‘myfile.h’ 
//      which is #included in a file ‘myfile1.h’. Now in your program 
//      file if you #include both ‘myfile.h’ and ‘myfile1.h’ the 
//      compiler flashes an error ‘Multiple declaration for myfunc’. 
//      This is because the same file ‘myfile.h’ gets included twice. 
//      To avoid this we can write following code in the header file.

/* myfile.h */ 
#ifndef __myfile_h 
 #define __myfile_h 
 myfunc( ) 
 { 
 /* some code */ 
 } 
#endif

// First time the file ‘myfile.h’ gets included the preprocessor 
// checks whether a macro called __myfile_h has been defined 
// or not. If it has not been then it gets defined and the rest of the 
// code gets included. Next time we attempt to include the same 
// file, the inclusion is prevented since __myfile_h already 
// stands defined. Note that there is nothing special about 
// __myfile_h. In its place we can use any other macro as well. 



// #if and #elif Directives 
// The #if directive can be used to test whether an expression 
// evaluates to a nonzero value or not. If the result of the expression 
// is nonzero, then subsequent lines upto a #else, #elif or #endif are 
// compiled, otherwise they are skipped.

// A simple example of #if directive is shown below: 
main( ) 
{ 
 #if TEST <= 5 
 statement 1 ; 
 statement 2 ; 
 statement 3 ; 
 #else 
 statement 4 ; 
 statement 5 ; 
 statement 6 ; 
 #endif 
} 

// If the expression, TEST <= 5 evaluates to true then statements 1, 2 
// and 3 are compiled otherwise statements 4, 5 and 6 are compiled. 
// In place of the expression TEST <= 5 other expressions like 
// ( LEVEL == HIGH || LEVEL == LOW ) or ADAPTER == 
// CGA can also be used.

// If we so desire we can have nested conditional compilation 
// directives. An example that uses such directives is shown below. 
// #if ADAPTER == VGA 
//  code for video graphics array 
// #else 
//  #if ADAPTER == SVGA 
//  code for super video graphics array 
//  #else 
//  code for extended graphics adapter 
//  #endif 
// #endif

// The above program segment can be made more compact by using 
// another conditional compilation directive called #elif. The same 
// program using this directive can be rewritten as shown below.

// Observe that by using the #elif directives the number of #endifs 
// used in the program get reduced. 
// #if ADAPTER == VGA 
//  code for video graphics array 
// #elif ADAPTER == SVGA 
//  code for super video graphics array 
// #else 
//  code for extended graphics adapter 
// #endif

