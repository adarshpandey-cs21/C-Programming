#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number\n");
    scanf("%d", &a);
     printf("Enter the first number\n");
    scanf("%d", &b);
    c=b;
    b=a;
    a=c;
    printf("the value of first number after swappig : %d\n",a);
     printf("the value of second number after swappig : %d\n",b);
}