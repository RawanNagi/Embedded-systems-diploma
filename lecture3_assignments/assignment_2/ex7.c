#include "stdio.h"

void main()
{
    int x;
    printf ("please enter an integer: ");
    scanf ("%d", &x);
    
    if (x < 0)
        printf ("Erorr!!! Factorial of negative number doesn't exist.");
    
    if (x == 0)
        printf ("Factorial = 1");

    int i; 
    long factorial = 1;
    for (i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    printf ("Factorial = %d", factorial);
}