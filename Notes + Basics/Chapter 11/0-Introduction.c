// Dynamic Memory Allocation


// Basics
/*
When we think of creating something, we think of creating something from the very scratch, 
while this isn’t what actually happens when a computer creates a variable ‘X’; to the computer, is more like an allocation, the computer just assigns a memory cell from a lot of pre-existing memory cells to X. 

It’s like someone named ‘RAJESH’ being allocated to a hotel room from a lot of free or empty pre-existing rooms. This example probably made it very clear as how the computer does the allocation of memory.
Now, what is Static Memory Allocation? When we declare variables, we actually are preparing all the variables that will be used, 

so that the compiler knows that the variable being used is actually an important part of the program that the user wants and not just a rogue symbol floating around. 
So, when we declare variables, what the compiler actually does is allocate those variables to their rooms (refer to the hotel analogy earlier). 
Now, if you see, this is being done before the program executes, you can’t allocate variables by this method while the program is executing. 
*/

// NEED TO INTRODUCE DYNAMIC MEMORY ALLOCATION
/*
though it isn’t blatantly visible, not being able to allocate memory during run time precludes flexibility and compromises with space efficiency. 
Specially, those cases where the input isn’t known beforehand, we suffer in terms of inefficient storage use and lack or excess of slots to enter data (given an array or similar data structures to store entries). 
So, here we define Dynamic Memory Allocation: The mechanism by which storage/memory/cells can be allocated to variables during the run time is called Dynamic Memory Allocation (not to be confused with DMA). 
So, as we have been going through it all, we can tell that it allocates the memory during the run time which enables us to use as much storage as we want, without worrying about any wastage.
*/

// DEFINATION
// Dynamic memory allocation is the process of assigning the memory space during the execution time or the run time.