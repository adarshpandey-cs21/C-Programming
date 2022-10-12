#include <stdio.h>
int main()
{
    int i, j, size, len;

    printf("enter the size of array\n ");
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
        printf("%d,", arr[i]);
    }
    len=sizeof(arr)/sizeof(int);
    printf("/n the lenght of dynamic array is : %d\n",len);
}