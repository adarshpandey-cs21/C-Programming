#include <stdio.h>
int main()
{
    int i,a[10],b[10];
    for (i = 0; i < 10; i++)
    {
     printf("Enter the marks of student of section A whose Roll No. is '%d'\n",i);
        scanf("%d", &a[i]);
    }
    printf("Marks of student of section A are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        b[i]=a[i];
    }
    
     printf("Marks of student of section B are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

}