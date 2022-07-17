#include "stdio.h"

void main()
{
    int x;
    printf("please enter a positive integer: ");
    scanf("%d", &x);

    int i, sum = 0;
    for (i = 1; i <= x; i++)
    {
        sum += i;
    }

    printf("sum = %d", sum);
}