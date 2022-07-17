#include "stdio.h"
// /*
void main()
{
    float a, b, c, max1, max2;
    printf("please enter three numbers: ");
    scanf("%f %f %f", &a, &b ,&c);

    max1 = (a>b) ? a : b;
    max2 = (c>max1) ? c : max1;

    printf("the largest number = %0.2f", max2);
}
// */

 /*
void main()
{
    float a, b, c;
    printf("please enter three numbers: ");
    scanf("%f %f %f", &a, &b ,&c);

    if (a > b)
    {
        if (a > c)
        {
            printf("the largest number = %0.2f", a);
        }
        else
        {
            printf("the largest number = %0.2f", c);

        }
    }
    else if (b > c)
    {
        printf("the largest number = %0.2f", b);
    }
    else
    {
        printf("the largest number = %0.2f", c);
    }
}
 */

 /*
void main()
{
    float a, b, c;
    printf("please enter three numbers: ");
    scanf("%f %f %f", &a, &b ,&c);

    if (a > b && a > c)
    {
        printf("the largest number = %0.2f", a);
    }
    else if (b > a && b > c)
    {
        printf("the largest number = %0.2f", b);
    }
    else 
    {
        printf("the largest number = %0.2f", c);
    }
}
 */