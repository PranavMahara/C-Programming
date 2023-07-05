
// Can an array of pointers to strings be used to collect strings 
// from the keyboard? If not, why not? 

// Ans-->
// The major drawback that we face while using an array of pointers to string is that we cannot take inputs to the string array using scanf() function.
// For a normal string array, we can either initialize the array with values or take string inputs from the user. 
// But in the case of an array of pointers to string this case does not apply. 
// We can only store values by initializing the array. 
// This is because the memory location contains garbage values and it is not feasible to send garbage values to scanf() function. 
// Thus the user cannot take inputs from the keyboard.