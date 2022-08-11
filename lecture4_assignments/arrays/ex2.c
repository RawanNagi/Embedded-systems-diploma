#include <stdio.h>

int main()
{
    int n;
    printf ("enter the number of data: ");
    scanf ("%d", &n);
    float x[n], sum = 0;
    
    int i;
    for (i = 0; i < n; i++)
    {
        printf ("%d. enter number: ", i+1);
        scanf ("%f", &x[i]);
        sum += x[i];
    }

    printf ("\nAverage: %0.2f\n", sum/n);

    return 0;
}