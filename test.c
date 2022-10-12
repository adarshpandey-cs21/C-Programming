#include <stdio.h>
int main()
{
    int i=4, j=4;
   // printf("Enter the number of rows :\n");
   // scanf("%d", &a);
    for (i = 1; i <= 4; i++)
    {
        for(j=1;j<=4;j++){
            if ((i==1||i==4 || j==1 || j==4)){
            printf("*");
            }
            else
            printf(" ");
        }
         printf("\n");
    }
   

}