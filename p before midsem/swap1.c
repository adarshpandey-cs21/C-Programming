#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
     printf("Enter the first number\n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of first number after swappig : %d\n",a);
     printf("the value of second number after swappig : %d\n",b);
}