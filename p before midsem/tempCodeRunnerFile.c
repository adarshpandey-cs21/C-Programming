#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Enter the number of rows :\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for(j=1;j<=i;j++){
            printf("*");
        }
         printf("\n");
    }
   

}