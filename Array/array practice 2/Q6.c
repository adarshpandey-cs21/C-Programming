#include <stdio.h>
#include<math.h>
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
    float sum=0.0,mean =0.0,standard_dev=0.0;
    for ( i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    mean=sum/size;
    for ( i = 0; i < size; i++)
    {
        standard_dev +=pow(arr[i]-mean,2);
    }
    printf("the mean of above array is : %0.02f\n",mean);
    printf("the standard deviation of above array is : %0.02f\n ",sqrt(standard_dev/size));
    
    


}