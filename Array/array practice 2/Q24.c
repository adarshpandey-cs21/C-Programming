#include <stdio.h>
int main()
{
    int i, j, size,num, count = 0;

    printf("enter the size of array\n ");
    scanf("%d", &size);
    int arr[size],freq[size];
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

    printf("Enter the element whose frequency is to be find\n");
    scanf("%d",&num);
    for (i = 0; i < size; i++) 
    {
            if (arr[i] == num)
            {
                count++;
            
            }
    
    }
    printf("total frequency of inputed element in array is : %d\n", count);
} 