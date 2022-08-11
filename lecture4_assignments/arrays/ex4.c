#include <stdio.h>

int main()
{
    int n;
    printf ("enter number of elements: ");
    scanf ("%d", &n);
    int x[n+1];

    printf ("\n");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &x[i]);
    }

    int element, location;
    printf ("\nenter the element to be inserted: ");
    scanf ("%d", &element);
    printf ("\nenter the location: ");
    scanf ("%d", &location);

    for (i = n; i >= 0; i--)
    {
        x[i+1] = x[i];
        if (i == location - 1)
        {
            x[i] = element;
            break;
        }
    }

    printf ("\n");
    for (i = 0; i <= n; i++)
    {
        printf ("%d ", x[i]);
    }

    printf ("\n");
    return 0;
}