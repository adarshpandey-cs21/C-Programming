#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
     
    if(a%2==0)
    printf(" %d is Even\n",a);
    else
     printf("%d is Odd\n",a);
}