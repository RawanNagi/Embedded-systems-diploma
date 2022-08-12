#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    printf ("\n Enter a string: ");
    gets(string);

    int i;
    for (i=0; string[i]!= 0; i++){}
    printf ("\n The length of the string: %d", i);
    
    printf ("\n");
    return 0;
}