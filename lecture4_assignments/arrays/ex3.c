#include <stdio.h>

int main()
{
    int r, c;
    printf ("enter number of rows and columns of the matrix: ");
    scanf ("%d %d", &r, &c);
    int x[r][c], t[c][r];

    printf ("\nenter elements of the matrix: \n");
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf ("enter element m%d%d: ", i+1, j+1);
            scanf ("%d", &x[i][j]);
        }
    }

    printf ("\nThe entered matrix: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf ("%d\t", x[i][j]);
        }
        printf ("\n");
    }

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            t[i][j] = x[j][i];
        }
    }

    printf ("\nThe transpose of the matrix: \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf ("%d\t", t[i][j]);
        }
        printf ("\n");
    }

    return 0;
}