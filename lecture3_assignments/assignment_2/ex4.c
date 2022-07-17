#include "stdio.h"

void main()
{
    float x;
    printf("please enter a number: ");
    scanf("%f", &x);

    if (x > 0)
    {
        printf("%0.2f is positive", x);
    }
    else if (x < 0)
    {
        printf("%0.2f is negative", x);
    }
    else 
    {
        printf("you entered zero");
    }   
}