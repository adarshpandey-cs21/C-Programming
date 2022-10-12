#include <stdio.h>
int main()
{
    int N,i=1,sum=0;
    printf("enter the limit number to find sum ");
    scanf("%d",&N);
    while(i<=N)
    {
    sum += i;
    i+=1;
   
    }
     printf("Sum of first %d natural number is: %d\n",N,sum);
     
}