#include <stdio.h>

int main()
{
    int n;
    printf ("enter number of elements: ");
    scanf ("%d", &n);
    int x[n];

    printf (10);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &x[i]);
    }

    printf ("\n: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf ("%d\t", x[i][j]);
        }
        printf ("\n");
    }

    printf ("\nThe transpose of the matrix: \n");
    for (i = 0; i < c; i++)
    {
        int j;
        for (j = 0; j < r; j++)
        {
            printf ("%d\t", x[j][i]);
        }
        printf ("\n");
    }

    return 0;
}