#include <stdio.h>
int main()
{
    int i, j, size, num, flag = 0,count=0;

    printf("enter the size of array\n ");
    scanf("%d", &size);
    int arr[size];
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
            break;
        }
        count++;
    }
    if(flag == 1){
        printf("element found\n");
        printf("position of searched elemen is :%d",count+1);
    }
    else
        printf("element not founds");
}