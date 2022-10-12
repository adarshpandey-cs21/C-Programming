#include <stdio.h>
int main()
{
int row,col;
    printf("enter the row\n");
    scanf("%d",&row);
     printf("enter the column\n");
    scanf("%d",&col);
    int arr[row][col];
    printf("Enter the elements in array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
             scanf("%d", &arr[i][j]);
        }
        
    }
    printf("Element of original array are:\n");
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%d\t", arr[i][j]);
        }
        
          printf("\n");

    }
  
}