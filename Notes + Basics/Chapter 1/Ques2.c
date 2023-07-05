// Area of Circle

# include<stdio.h>

int main()
{
    int radius;
    float pi = 3.14;

    printf("Enter the value of radius --> ");
    scanf("%d", &radius);


    printf("Area is %f \n", pi*radius*radius);    // Area is pi r^2 


    // if radius is in decimal then use float

    // Advice -- Use float as if we enter integer it will execute and print with decimal like 42.0000 but if we use integer we will not get desired output

    float r;
    float pii = 3.14;

    printf("Enter the value of r --> ");
    scanf("%f", &r);

    printf("Area is %f", pi*r*r); 



    


    return 0;

    }