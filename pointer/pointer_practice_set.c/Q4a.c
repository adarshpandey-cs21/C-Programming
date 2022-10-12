#include <stdio.h>
void main()
{
    int i, arr[8], *ptr[8], odd[8], even[8], j = 0, k = 0;
    printf("Enter the Element of array :\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        ptr[i] = &arr[i];
    }
    printf("the original array are\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", *ptr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        if (*ptr[i] % 2 == 0)
        {
            even[j] = *ptr[i];
            j++;
        }
        else
        {
            odd[k] = *ptr[i];
            k++;
        }
    }
    printf("the even element in array are\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }
    printf("the even element in array are\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }
}