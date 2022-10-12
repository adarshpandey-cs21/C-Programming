#include <stdio.h>
int main()
{
    int i, j = 0, k = 0, size, sum = 0;

    printf("Enter the size of array\n ");
    scanf("%d", &size);
    int arr[size];
   int  even[size], odd[size];
    printf("Enter the elements in array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element of original array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];

            j++;
        }
        else// if (arr[i] % 2 != 0)
        {
            odd[k] = arr[i];
            k++;
        }
    }
    printf("\n the even array is : ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("\n the odd array is : ");

    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }
}