#include <stdio.h>

int main()
{
    float x[2][2], sum[2][2];

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = 0;
        }
    }

    for (i = 1; i <= 2; i++)
    {
        printf ("enter the elements of M%d: \n", i);
        
        int k;
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf ("enter m%d%d of M%d: ", j+1, k+1, i);
                scanf ("%f", &x[j][k]);
            }

        }

        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                sum[j][k] += x[j][k];
            }
        }  
    }

    printf ("\nthe matrix of the sum:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf ("%0.1f\t", sum[i][j]);
        }
        printf ("\n");
    }

    return 0;
}