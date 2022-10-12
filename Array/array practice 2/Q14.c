#include <stdio.h>
int main()
{
    int i, j, size, num, flag = 0,temp=0;

    printf("enter the size of array\n ");
    scanf("%d", &size);
    int arr[size],count[size];
    printf("Enter the elements in array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number to be searched\n");
    scanf("%d", &num);
     for (i = 0; i < size; i++)
    {
       
        if (arr[i] == num)
        {
            flag = 1;
        count[i]=i+1;
          temp++;

        }
      
        
    }
    if(flag == 1){
        printf("element found\n");
        for(i=0;i<temp;i++){
        printf("position of searched elemen is :%d  \n",count[i]);
        }
    }
    else
        printf("element not founds");
}