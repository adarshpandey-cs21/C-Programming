#include <stdio.h>
int main()
{
    int i, j,k,size3, size;
    printf("Enter the size of both the array\n ");
    scanf("%d", &size);
    size3=2*size;
    int arr1[size], arr2[size],arr3[size3];
    printf("Enter the element of first array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the element of second element\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }


   
    for (i = 0; i < size; i++)
    {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < size; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
   for (int i = 0; i < size3; i++)
    {
        for (int k = 0; k < size3-1; k++)
        {
        if(arr3[k]<=arr3[k+1])
        {
            j=arr3[k+1];
            arr3[k+1]=arr3[k];
            arr3[k]=j;
        }
        
        }
        
    }
 printf("the merged array and sorted in decending orderare as folow:\n");
 for (int i = 0; i < size3; i++)
 {
     printf("%d",arr3[i]);
 }
   
}