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
    int n;
    printf("enter the number of times to rotate element of array towards left\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        int j,first;
        first =arr[0];
        for ( j = 0; j < size -1 ; j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=first;
        
    }
    printf("\n");
    printf("array after %d time left rotation\n",n);
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

}