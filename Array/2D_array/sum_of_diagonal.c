#include <stdio.h>
int main()
{

    int arr[3][3];
    printf("Enter the elements of first matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             scanf("%d", &arr[i][j]);
        }
        
    }
    int sum=0;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
    {
         if(i==j){
             sum+= arr[i][j];
            }
    }
    

           
        
    }
     printf("Element of matrices after summation are:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Element of matrices after summation are:\n");
            printf("%d ",sum);

    
  
}