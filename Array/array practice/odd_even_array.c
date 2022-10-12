/*
The following program demonstrate how to separate odd values and even from 
a single array to the respective array.
The array takes the input from the user for the size as well as the elements
Loop1: used to take the input from the user 
Loop2: used to display the input values
Loop3: is used to check whether the value in the array is even or odd and assing it in the 
       respective array
loop4: used to display even array
loop5: used to display odd array

*/
#include<stdio.h>
void main(){
    int i,n,sum=0,j=0,k=0;
    printf("Enter the size of the array:  ");
    scanf("%d",&n);
    int a[n];
    int even[n],odd[n];

//loop1
    printf("Enter the elements of the array:  ");
    for(i=0;i<n;i++){
    //  printf("\nEnter the value on index number %d :  ",i);
        scanf("%d",&a[i]);
    }
//loop2
    printf("The elements in the array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }

//loop3
    for(i=0;i<n;i++){
        if(a[i]%2==0 ){
            even[j]=a[i];
            j++;
        }
        else if(a[i]%2!=0){
            odd[k]=a[i];
            k++;
        }
    }
    //loop4
    printf("\n\n");
    printf("The array of even values is: ");
    for(i=0;i<j;i++){
        printf("%d ",even[i]);
    }
    //loop5
    printf("\n");
    printf("The array of odd values is: ");
    for(i=0;i<k;i++){
        printf("%d ",odd[i]);
    }

}