#include "stdio.h"
// /*
void main()
{
    float a, b, c;
    printf("please enter three numbers: ");
    scanf("%f %f %f", &a, &b ,&c);
    printf("the largest number = %0.2f", (a>b) ? (c>a) ? c : a  : (c>b) ? c : b);
}
// */

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