#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a=8, *ptr;
    ptr=&a;      
    printf("%d\n",ptr);
    printf("%d\n",&a);
    printf("%d\n",*ptr);

}