#include <stdio.h>
int main()
{
    int i,size,sum=0;
   float avr;

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
    for(i=0;i<size;i++){
        sum=sum + arr[i];
    }
    printf("The sum of element of above array is : %d \n",sum);
    avr= (float)sum/size; 
    printf("Average of the above array is : %0.2f\n",avr);


}