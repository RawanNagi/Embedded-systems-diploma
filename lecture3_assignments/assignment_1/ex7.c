#include "stdio.h"
// /*
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

    printf("After swapping value of A = %f \n", a);
    printf("After swapping value of B = %f", b);
}
// */

/*
void main()
{
    float a, b;
    printf("please enter the value of A: ");
    scanf("%f", &a);
    printf("please enter the value of B: ");
    scanf("%f", &b);
    printf("After swapping value of A = %f", b);
    printf("After swapping value of B = %f", a);
}
*/
