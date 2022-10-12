#include <stdio.h>
int main()
{

    int arr[3][3];
    int array[3][3];
    int sum[3][3];
    printf("Enter the elements of first matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             scanf("%d", &arr[i][j]);
        }
        
    }
     printf("Enter the elements of second matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             scanf("%d", &array[i][j]);
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             sum[i][j]=arr[i][j] + array[i][j];
        }
        
    }
    printf("Element of matrices after summation are:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        
          printf("\n");

    }
  
}