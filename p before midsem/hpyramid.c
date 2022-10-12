#include <stdio.h>
int main()
{
    int i=5, j=5;
   // printf("Enter the number of rows :\n");
   // scanf("%d", &a);
    for (i = 1; i <= 5; i++)
    {
        for(j=1;j<=i;j++){
            if ((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)){
            printf("0");
            }
            else
            printf("1");
        }
         printf("\n");
    }
   

}