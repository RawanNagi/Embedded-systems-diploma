#include "stdio.h"

void main()
{
    char x;
    printf("please enter a character: ");
    scanf("%c", &x);

    
    if ((x > 64 && x < 91) || (x > 96 && x < 123))
    {
        printf ("%c is an alphabet", x);
    }
    else
    {
        printf ("%c is not an alphabet", x);
    }
}
