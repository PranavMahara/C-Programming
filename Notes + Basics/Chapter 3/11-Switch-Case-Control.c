#include<stdio.h>

int main(){
    int rating;
    printf("Enter the value of rating: ");
    scanf("%d", &rating);

    switch(rating){
        case 651:
        printf("Hello");
        break;

        case 2:
        printf("Hello-2");
        break;

        case 3:
        printf("Hello-3");
        break;

        case 4:
        printf("Bye");
        break;

        case 5:
        printf("Bye-2");
        break;
        
    }

return 0;
}