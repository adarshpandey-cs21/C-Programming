#include <stdio.h>
int main()
{
    int flag = 0, num, i, arr[6] = {19, 45, 67, 78, 89, 56};
    printf("Enter the number you want to search");
    scanf("%d", &num);
    for (i = 0; i < 8; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Element found:\n");
    }
    else
    {
        printf("Element not found ");
    }
    printf("\n");
}