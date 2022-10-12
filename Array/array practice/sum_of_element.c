/*
The following program demonstrate how to add all the elements in the array.
The array takes the input from the user for the size as well as the elements
Loop1: used to take the input from the user 
Loop2: used to display the input values
Loop3: for adding all the elements of the array.

*/
#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter the size of the array:  ");
    scanf("%d",&n);
    int a[n];
//loop1
    printf("Enter the elements of the array:  ");
    for(i=0;i<n;i++){
        printf("\nEnter the value on index number %d :  ",i);
        scanf("%d",&a[i]);
    }
//loop2
    printf("The elements in the array is: ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
//loop3
    for(i=0;i<n;i++){
        sum = sum+a[i];
    }
    printf("The sum of these elements is : %d",sum);
}