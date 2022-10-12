#include <stdio.h>
int main()
{
    int i,size;

    printf("Enter the size of array\n ");
    scanf("%d", &size);
    int arr[size];
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
     printf("Element after reversing original array are:\n");
    for (i = size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

}