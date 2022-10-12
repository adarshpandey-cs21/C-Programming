#include <stdio.h>
int main()
{
    int i,size,temp;

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
    for ( i = 0; i < size; i++)
    {
        for ( int j = 0; j < size; j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
        
    }
    printf("array after arranging in ascending :\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    printf("The smallest element of the above array is : %d\n",arr[0]);

}