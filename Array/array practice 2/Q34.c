#include <stdio.h>
int main()
{
    int i, arr[7] = {12,67,45,34,87,90,23};
    for (i = 2; i <= 5; i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i = 2; i <=5; i++)
    {
        printf("%d ",arr[i]);
    }
    
}