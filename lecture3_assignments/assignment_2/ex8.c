#include "stdio.h"

void main()
{
    char c;
    float a, b;
    printf ("please enter an operator ( (+) or (-) or (*) or (/) ): ");
    scanf("%c", &c);

    printf ("please enter the two operands in order: ");
    scanf("%f %f", &a, &b);

    switch (c)
    {
    case 43:
        printf ("%0.1f + %0.1f = %0.1f", a, b, a+b);
        break;

    case 45:
        printf ("%0.1f - %0.1f = %0.1f", a, b, a-b);
        break;

    case 42:
        printf ("%0.1f * %0.1f = %0.1f", a, b, a*b);
        break;

    case 47:
        printf ("%0.1f / %0.1f = %0.1f", a, b, a/b);
        break;
    
    default:
        printf ("An error occurred!");
    }
}