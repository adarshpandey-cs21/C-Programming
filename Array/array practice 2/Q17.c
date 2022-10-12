#include <stdio.h>
int main()
{
    int i,size;

    printf("Enter the size of array\n ");
    scanf("%d", &size);
    int arr[size],position,value;
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
     printf("Enter the position to which an array is to be inserted\n");
    scanf("%d",&position);
    printf("Enter the value to be inserted\n");
    scanf("%d",&value);
    size++;
    for (int i = size-1; i >=position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
    printf("the final array after inserting \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

} 