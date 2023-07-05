#include<stdio.h>
void change(int *b);

int main(){
    
    int b = 344;
    printf("The value of b before change is %d \n", b);
    change(&b);                                           // yaha ka b alag hai
    printf("The value of b after change is %d \n", b);
    
    
    return 0;
}

void change(int *b){
    *b = 77; // yeh vala b alag hai yeh b is code ka hai upar vala b main code ka hai so value doesnt change
}