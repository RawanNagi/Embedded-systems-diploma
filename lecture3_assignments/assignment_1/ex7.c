#include <stdio.h>

void main()
{
    float a, b;
    printf("please enter the value of A: ");
    scanf("%f", &a);
    printf("please enter the value of B: ");
    scanf("%f", &b);

    a += b;     // a = a+b
    b = a - b;  // b = a>>(a+b) -b  = a
    a -= b;     // a = a>>(a+b) - b>>(a) = b

    printf("\nAfter swapping, value of A = %0.2f \n", a);
    printf("After swapping, value of B = %0.2f", b);

    printf ("\n");
    return 0;
}