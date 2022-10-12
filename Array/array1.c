#include <stdio.h>
int main()
{
    int i, j, position,value,size;

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
        printf("%d ", arr[i]);
    }
    printf("enter theposition to which you want to add elemment\n");
    scanf("%d",&position);
    printf("Enter thevalue to be inserteed\n");
    scanf("%d",&value);
    size++;
    for(i=size-1;i>=position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
    printf("the array after inserting new array is :\n");
    for(i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
}