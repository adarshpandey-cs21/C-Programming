#include <stdio.h>
int main()
{
    int i, j, size, temp = 0;

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
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

                
            }
        }
    }
    printf("\n");
    printf("element of array sorted in ascending order are as follow : \n");
    for(int i=0;i<size;i++)
    printf("%d,",arr[i]);
}