/*The following program demonstrates the insertion of a value at a given position. For this 
we need to create to an array of a fixed side and then we increase the size of the array 
by one. later the position at which the value needs to inserted is emptied and the values 
to the right are shifted by one memory block. 
Loop1: To create the array by the user. Dynamic initialization of the array
Loop2: To print the values inside the array
Loop3: To shift all the values to right from the given index position of the inserting value
Loop4: To print the updated array
*/

#include<stdio.h>
void main(){
    int position,i,size,value;
    printf("Enter the size of array : \n ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements in the array:  ");
    //Loop1
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    //Loop2
    printf("\nThe Array created is :  ");
    for(i=0;i<size;i++){
        printf("%d  ",a[i]);
    }
    printf("\nEnter the new position in which you want to insert the the new element");
    scanf("%d",&position);
    printf("\nEnter the value to be inserted :");
    scanf("%d",&value);
    size++; // increasing the size by one.
    //Loop3
    for(i=size-1;i>=position;i--){
        a[i] = a[i - 1];
    }
    a[position-1]=value;
    //Loop4
    printf("\nThe final array is: ");
    for(i=0;i<size;i++){
        printf("%d  ",a[i]);
    }
}