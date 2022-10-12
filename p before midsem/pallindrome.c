#include <stdio.h>
int main()
{
    int n,m, reverse = 0, rem;
    printf("enter the number to check ");
    scanf("%d", &n);
    m=n;
    while (n!=0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    
    if(m == reverse)
    printf("pallindrome");
    else
    printf("not pallindrome");
}