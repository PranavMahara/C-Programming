// In a macro call the preprocessor replaces the macro template with 
// its macro expansion, in a stupid, unthinking, literal way. As 
// against this, in a function call the control is passed to a function 
// along with certain arguments, some calculations are performed in 
// the function and a useful value is returned back from the function. 

// This brings us to a question: when is it best to use macros with 
// arguments and when is it better to use a function? Usually macros 
// make the program run faster but increase the program size, 
// whereas functions make the program smaller and compact. 
// If we use a macro hundred times in a program, the macro 
// expansion goes into our source code at hundred different places, 
// thus increasing the program size. On the other hand, if a function 
// is used, then even if it is called from hundred different places in

// the program, it would take the same amount of space in the 
// program. 
// But passing arguments to a function and getting back the returned 
// value does take time and would therefore slow down the program. 
// This gets avoided with macros since they have already been 
// expanded and placed in the source code before compilation. 
// Moral of the story is—if the macro is simple and sweet like in our 
// examples, it makes nice shorthand and avoids the overheads 
// associated with function calls. On the other hand, if we have a 
// fairly large macro and it is used fairly often, perhaps we ought to 
// replace it with a function. 

