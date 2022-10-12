#include<stdio.h>
int main()
 {
   int size;
   printf("enter size of array\n");
   scanf("%d",&size);
   int arr[size],i;
   
   for(i=0;i<size;i++)
   {
       printf("enter the %d element of an array\n",i+1);
       scanf("%d",&arr[i]);
   }
   printf("the original array are:\n");
  for(i=0;i<size;i++){
printf("%d ",arr[i]);
  }
int temp=0,count=0,flag=0;
for (int i = 0; i < size; i++)
{
    if(arr[i]>0){
        temp+=1;
    }
    else if(arr[i]<0){
        count+=1;
    }
    else{
        flag+=1;
    }
}
printf("\n");
printf("Total number of positive element in given array are : %d\n",temp);
printf("Total number of negative element in given array are : %d\n",count);
printf("Total number of zero element in given array are : %d\n",flag);

 }