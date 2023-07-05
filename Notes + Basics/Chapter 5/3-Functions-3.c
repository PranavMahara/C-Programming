#include<stdio.h>
void ATG();
void GTG();

int main(){
    printf("Good Morning \n");
    ATG();
    
    printf("Good night \n");
    return 0;
}

void ATG(){
    printf("Good Afternoon \n");
    printf("U can execute multiple codes.......LOL \n");
    GTG(); // This will also run this is like first int main mein Good morning run hoga phir ATG mein Good Afternon then multiple code vali line then GTG() run hoga phir GTG mein ATG is great print hoga then int mein bacha hua print hoga(Good night print hoga) then code end hojaega
}

void GTG(){
    printf("ATG is great.....Hahaha\n");
}

