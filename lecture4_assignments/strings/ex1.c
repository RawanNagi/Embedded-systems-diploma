#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000], c;
    printf ("\n Enter a string: ");
    gets(string);
    strlwr(string);

    printf ("\n Enter a character to find its frequency: ");
    scanf ("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        c += ('a' - 'A');
    }

    int i, freq = 0;
    for (i=0; i<strlen(string); i++)
    {
        if (c == string[i])
        {
            freq++;
        }
    }
    
    if (freq)
    {
        printf ("\n The frequency of %c = %d", c, freq);
    }
    else
    {
        printf ("\n that character is not in this sentence");
    }
    
    printf ("\n");
    return 0;
}