#include <stdio.h>

int main()
{
    int n;
    printf ("enter number of elements: ");
    scanf ("%d", &n);
    int x[n];

    printf ("\n");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &x[i]);
    }

    int element, location = -1;
    printf ("\nenter the element to be searched for: ");
    scanf ("%d", &element);
    
    for (i = 0; i < n; i++)
    {
        if (x[i] == element)
        {
            location = i+1;
            printf ("\nThe number was found at location: %d", location);
            break;
        }
    }

    if (location == -1)
    {
        printf ("\nThe number is not on the list");
    }

    printf ("\n");
    return 0;
}