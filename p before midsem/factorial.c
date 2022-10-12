#include <stdio.h>
int main()
{
    int n,m,fact=1;
    printf("enter the number to find factorial ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        fact=fact*n;
        n-=1;
    }
printf("factorial of %d is %d",m,fact);
     
}