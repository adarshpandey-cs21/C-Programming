#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the number of row :");
    scanf("%d",& a);
    printf("Enter the number of column :");
    scanf("%d",& b);
    char i, j;
    for (i = 1; i <= a; i++)
    {

        for (j = 1; j <= b; j++)
        { 
            if(j%2 !=0)

            printf("*", j);
            else
            printf("#");
        }
        printf("\n");
    }
}