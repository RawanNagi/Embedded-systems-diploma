#include "stdio.h"

void main()
{
    char c;
    printf("please enter an alphabet: ");
    scanf("%c", &c);
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is a consonant", c);
    }
}