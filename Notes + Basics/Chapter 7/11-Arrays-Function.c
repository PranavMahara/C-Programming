#include<stdio.h>
void printArray(int *ptr, int n); // int *ptr or int ptr[] (int ptr[] basically means ptr[0]  ptr[0] likhoge toh bhi chalega)

int main(){
    int marks[] = {1,2,43,34,45,5,444};
    printf("ptr[2] before is %d \n", marks[2]);
    printArray(marks, 7);  // marks or &marks[0]

    printf("ptr[2] after is %d", marks[2]); // will be changed in main as well
    return 0;
}

void printArray(int *ptr, int n){
    for(int i = 0; i<n; i++){
        printf("The value of element %d is %d \n", i+1, ptr[i]); // ptr[i] or *(ptr+i)   
    }
    ptr[2] = 69;
        
}