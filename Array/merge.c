#include <stdio.h>
int main()
{
    int i, j, size;
    printf("Enter the size of both the array\n ");
    scanf("%d", &size);
    int arr[size], array[size];
    printf("Enter the element of first array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element of second element\n");
    for (j = 0; j < size; j++)
    {
        scanf("%d", &array[j]);
    }
    int size3;
    size3=2*size;
    int arrax[size3];

    printf("the total element after merging both the arrays are :\n");
    for (i = 0; i < size; i++)
    {
        arrax[i] = arr[i];
    }
    for (j = 0; j < size; j++)
    {
        arrax[i] = array[j];
        i++;
    
    }
    for (int i = 0; i < size3; i++)
    {
        printf("%d",arrax[i]);
    }
    
}