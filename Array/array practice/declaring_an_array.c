/*
The following C programms demonstrates how we can take input from a user where the size of the
array is also declared by the user.

Loop1: is used to take the input from the user a[i] where i is the position of the index.

Loop2: is used to print the values of the array a[].
*/
#include<stdio.h>
void main(){
    int n,i;
    printf("Enter the size of the array:  ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements in the array:  ");
    //loop1
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The array created is as follows:  ");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}