#include "stdio.h"

void main()
{
    char x;
    printf("please enter a character: ");
    scanf("%c", &x);
    printf("the ASCII value of %c = %d ", x, x);
}