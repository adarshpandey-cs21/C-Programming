#include <stdio.h>
int main()
{
    int i,arr[100],size,pos,ele;
    
    

    printf("Enter the size of array\n ");
    scanf("%d", &size);
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
    printf("Enter the element you want to delete \n");
    scanf("%d",&ele);
    for ( i = 0; i <size; i++)
    {
        if(arr[i]==ele){
            pos=i+1;
        }
    }
    
  size--;
    for(i=pos-1;i<size;i++){
        arr[i]=arr[i+1];
       
    }
      printf("the array after deleting element\n");
    for (int i = 0; i < size; i++)
    {
         printf("%d ",arr[i]);
    }
    


}