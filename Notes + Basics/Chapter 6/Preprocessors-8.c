// The second preprocessor directive we’ll explore in this chapter is 
// file inclusion. This directive causes one file to be included in 
// another. The preprocessor command for file inclusion looks like 
// this: 

// #include "filename" 

// and it simply causes the entire contents of filename to be inserted 
// into the source code at that point in the program. Of course this 
// presumes that the file being included is existing. When and why 
// this feature is used? It can be used in two cases: 

// If we have a very large program, the code is best divided into 
// several different files, each containing a set of related 
// functions. It is a good programming practice to keep different 
// sections of a large program separate. These files are 
// #included at the beginning of main program file. 

// There are some functions and some macro definitions that we 
// need almost in all programs that we write. These commonly
// needed functions and macro definitions can be stored in a file, 
// and that file can be included in every program we write, 
// which would add all the statements in this file to our program 
// as if we have typed them in.

// #include "goto.c"   This command would look for the file goto.c
//                     in the current directory as well as the 
//                     specified list of directories as mentioned in 
//                     the include search path that might have been 
//                     set up.

// #include <goto.c>   This command would look for the file goto.c 
//                     in the specified list of directories only. 