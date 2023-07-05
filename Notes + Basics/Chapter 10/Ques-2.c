// Generate multiplication table in txt file

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("Multi.txt", "w");

    int num;
    printf("Enter the number --> ");
    scanf("%d", &num);

    for(int i=0; i<10; i++){
        fprintf(ptr, "%d x %d --> %d \n", num, i+1, num*(i+1));
    }

    fclose(ptr);
    
    return 0;
}