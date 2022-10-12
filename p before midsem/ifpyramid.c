#include <stdio.h>
void main()
{
    int i, j, a,k,m=1;
    printf("Enter the number of rows :\n");
    scanf("%d", &a);
    
    for (i = a; i >= 1; i--)
    {
        for(j=1;j <=m;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        printf("*");
        m++;
         printf("\n");
    }
   

}