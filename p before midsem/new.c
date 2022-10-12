#include <stdio.h>
int main()
{
    int i, j, k, a, m=1;
    printf("Enter the number of rows :\n");
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        for (j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
            for (k = 1; k <= m; k++)
            {
                printf("*");
            }

            m++;

            printf("\n");
        
    }
}