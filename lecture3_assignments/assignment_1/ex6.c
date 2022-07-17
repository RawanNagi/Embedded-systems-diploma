#include "stdio.h"

void main()
{
    float a, b, temp;
    printf("please enter the value of A: ");
    scanf("%f", &a);
    printf("please enter the value of B: ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping value of A = %f \n", a);
    printf("After swapping value of B = %f", b);
}

