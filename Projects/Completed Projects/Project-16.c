// Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<stdio.h>

int main(){
    int length;
    printf("The value of length is --> ");
    scanf("%d", &length);
    

    int breadth;
    printf("The value of breadth is --> ");
    scanf("%d", &breadth);
    

    int a = length*breadth;
    int b = length*length;

    printf("The Area of rectangle is %d units^2 \n", a);
    printf("The Area of square is %d units^2 \n", b);

    if (a==b){
        printf("It's a square");
    }
    else{
        printf("It's not a square");
    }

    return 0;
}
// OTHER WAY

// #include <stdio.h>
// int main()
// {
//   int length, breadth;
//   printf("Enter the values for length and breadth\n");
//   scanf("%d %d",&length,&breadth);
//   if(length==breadth)
//   {
//     printf("Yes, it is a square.\n");
//   }
//   else
//   {
//     printf("No, it is a rectangle.\n");
//   }
//   return 0;
// }
