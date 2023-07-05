// Write a program in C to print all the alphabets using a pointer and functions


#include<stdio.h>

void inp(char *ptr){
    for(int i=0; i<26; i++){
        ptr[i] = i+65;
    }
}

// void inp(char *ptr){             // you can also do this
//     for(int i=0; i<26; i++, ptr++){
//         *ptr = i+65;
//     }
// }

int main(){
    char alpha[26];
    inp(&alpha[0]);  // or inp(alpha)

    for(int i=0; i<26; i++){
        printf("%c ", alpha[i]);
    }

    return 0;
}