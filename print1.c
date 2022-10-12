#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {

        for (j = 4; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}