#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    printf ("\n Enter a string: ");
    gets(string);

    int i;
    string[2*strlen(string)+1] = 0;
    for (i=0; i<strlen(string); i++)
    {
        string[2*strlen(string)-i] = string[i];
    }
    printf ("\n The reverse of the string is: %s", &string[strlen(string)+1]);
    
    printf ("\n");
    return 0;
}