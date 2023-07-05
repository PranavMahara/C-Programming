#include<stdio.h>

int main()
{
    int Physics, Chemistry, Maths;

    printf("Marks in physics is ", Physics);
    scanf("%d", &Physics);

    if(Physics>33){
        printf("Pappu Pass hogya \n");
    }
    else{
        printf("Pappu Fail hogya \n");
    }

    printf("Marks in chemistry is ", Chemistry);
    scanf("%d", &Chemistry);

     if(Chemistry>33){
        printf("Pappu Pass hogya \n");
    }
    else{
        printf("Pappu Fail hogya \n");
    }


    printf("Marks in Maths is ", Maths);
    scanf("%d", &Maths);

     if(Maths>33){
        printf("Pappu Pass hogya \n");
    }
    else{
        printf("Pappu Fail hogya \n");
    }




    printf("Total Marks is %d \n", Physics+Maths+Chemistry);
    int a = Physics+Maths+Chemistry;

    if(a>120){                                                 // 300 mein se 40 percent bole toh 120 marks so a>120
        printf("Yes He did it Congratulations \n");
    }
    else{
        printf("120 Marks bhi ni aaye \n");
    }




    // Simply this code can be like this: 
    //  
    

    return 0;
}