#include <stdio.h>

int main()
{
    int a = 3, b = 4, c;
    c = b - a;
    switch (c)
    {
    case (1 || 2):
        printf("God give me an opportunity to change things");
        break;
    case (a || b): // expression must h ave constant value
        printf("God give me an opportunity to run my show");
        break;
    }
    return 0;
}