#include<stdio.h>
struct ref{
    int data;
    char val;
    struct ref *link;
};

int main(){
    struct ref obj, obj2, obj3;
    obj.link = NULL;
    obj.data = 20;
    obj.val = 30;

    obj2.link = NULL;
    obj2.data = 40;
    obj2.val = 50;
    obj.link = &obj2;
    printf("%d \n", obj.link -> data);
    printf("%d", obj.link -> val);
    
    return 0;
}