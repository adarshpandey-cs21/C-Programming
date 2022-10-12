#include <stdio.h>
void main()
{
    int n, i, j, sum, lower_limit, upper_limit;
    printf("enter the lower limit");
    scanf("%d", &lower_limit);
    printf("enter the upper limit");
    scanf("%d", &upper_limit);

    for (i = lower_limit; i <= upper_limit; i++)
    {
        n = i;
        sum = 0;
        for (j = 1; j <= n / 2; j++)
        {
            if (n % j == 0)
            {
                sum += j;
            }
        }
         if (sum == n)
        printf("%d\n", sum);
    }
   
}