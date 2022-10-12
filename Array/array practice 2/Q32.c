#include <stdio.h>
int main()
{
    int temp, i,arr[8]={12,5,17,87,109,43,44,47};
    for (i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
            
        }
        
    }
    printf("array after sorting are:\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}