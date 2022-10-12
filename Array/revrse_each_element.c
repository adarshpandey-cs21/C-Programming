#include <stdio.h>
int main()
{
    int i, j, size, rem, reverse;

    printf("enter the size of array\n ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements in array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        reverse=0;
        while (arr[i] > 0)
        {
            rem = arr[i] % 10;
            reverse = reverse * 10 + rem;
            arr[i] /= 10;
        }
        arr[i] = reverse;
    }
    for (i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}