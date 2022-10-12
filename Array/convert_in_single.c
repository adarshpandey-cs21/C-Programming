#include <stdio.h>
#include<math.h>
int main()
{
    int i,size;

    printf("Enter the size of array\n ");
    scanf("%d", &size);
    int arr1[size],arr[size],sum=0,count;
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
    sum=0;
    for ( i = 0; i < size; i++)
    {
    arr1[i]=arr[i];
    count=0;
        while(arr[i]>0){
            
            arr[i]/=10;
            count+=1;
        }
        sum= pow (10,count) * sum + arr1[i];
        
    }
    printf("after converting all element in single number are : %d\n",sum);
    

} 