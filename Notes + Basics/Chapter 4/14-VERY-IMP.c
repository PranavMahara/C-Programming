#include<stdio.h>

int main(){
    int i=1;
    while(i<=32800){
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// No, it doesn't print number from 1 to 32767. It goes to 32767 and after incremented by 1 it 
// tries to become 32768, which falls outside the valid integer 
// range, so it goes to other side and becomes -32768 which 
// would certainly satisfy the condition in the while. This 
// process goes on indefinitely. 
// You may see something different
// Just Compiler Things :)

// +=, -=, *=, /=, %= are compound assignment operator 